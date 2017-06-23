using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Facebook.MiniJSON;
using Assets.Scripts;
using System.Text.RegularExpressions;

public class WebRequest : MonoBehaviour
{
    public static WebRequest webRequest;
    GameManager gameManagerInstance;
    FBScript fbScriptInstance;
    View viewManagerInstance;
    string authCookiesString;

    void Awake()
    {
        if (webRequest == null)
            webRequest = this;
    }

    // Use this for initialization
    void Start()
    {
        gameManagerInstance = GameManager.gameManager;
        fbScriptInstance = FBScript.fbScript;
        viewManagerInstance = View.viewManager;
    }

    public IEnumerator GetRequest(string url)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        var requestCookies = PlayerPrefs.GetString("authCookies") + "erpk_auth=1;";

        //Debug.Log(requestCookies);

        www.SetRequestHeader("Cookie", requestCookies);

        yield return www.Send();

        if (www.isError)
        {
            Debug.Log(www.error);
        }
        else {
            Debug.Log("@@@@@@ GetRequest results: " + www.downloadHandler.text);
            Debug.LogWarning("get request headers: " + www.GetRequestHeader("cookie"));

            JSONObject getResponseObj = new JSONObject(www.downloadHandler.text);
            StartCoroutine(viewManagerInstance.ViewResponse(getResponseObj));
        }
    }

    public IEnumerator GetTexture(string url)
    {
        using (UnityWebRequest www = UnityWebRequest.GetTexture(url))
        {
            yield return www.Send();

            if (www.isError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Texture2D myTexture = DownloadHandlerTexture.GetContent(www);
                StartCoroutine(fbScriptInstance.DisplayUserAvatar(myTexture));
            }
        }
        
    }

    public IEnumerator PostRequest(string url, Dictionary<string, string> formData)
    {
        Debug.LogWarning("formData : " + Json.Serialize(formData));

        List<IMultipartFormSection> formParams = new List<IMultipartFormSection>();
        
        foreach (var item in formData)
        {
            formParams.Add(new MultipartFormDataSection(item.Key, item.Value));
        }

        UnityWebRequest www = UnityWebRequest.Post(url, formParams);
        yield return www.Send();
        
        if (www.isError)
        {
            Debug.Log(www.error);
        }
        else {
            Dictionary<string, string> postCookies = www.GetResponseHeaders();
            JSONObject cookiesObj = new JSONObject(postCookies);
            
            if(cookiesObj.HasField("Set-Cookie"))
            {
                var cookiesAuthObj = cookiesObj.GetField("Set-Cookie").str;

                /*
                Match match = Regex.Match(cookiesAuthObj, @"(erpk=)(.*?);");
                if (match.Success)
                {
                    authCookiesString = match.Value;
                }
                */

                // Get first match.
                Match match = Regex.Match(cookiesAuthObj, @"(erpk_rm=|erpk=)(.*?);");
                if (match.Success)
                {
                    //Debug.Log(match.Groups[2].Value);
                    //Debug.Log(match);
                    authCookiesString += match.Value;
                }

                // Get second match.
                match = match.NextMatch();
                if (match.Success)
                {
                    //Debug.Log(match.Groups[2].Value);
                    //Debug.Log(match);
                    authCookiesString += match.Value;
                }

                //Debug.Log(authCookiesString);

                PlayerPrefs.SetString("authCookies", authCookiesString);

                JSONObject loginResponseObj = new JSONObject(www.downloadHandler.text);
                Debug.Log("Login Response Obj: " + loginResponseObj);
                StartCoroutine(fbScriptInstance.LoginSuccess(loginResponseObj));
            }

        }
    }

}	
