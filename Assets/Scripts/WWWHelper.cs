using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Facebook.MiniJSON;

public class WWWHelper : MonoBehaviour {

    public static WWWHelper wwwHelper;
    GameManager manager;

    void Awake()
    {
        if (wwwHelper == null)
            wwwHelper = this;

        manager = GameManager.gameManager;
    }

    public void Get(string url)
    {
        WWW www = new WWW(url);
        //string cookie = www.responseHeaders["Set-Cookie"];

        StartCoroutine(WaitForRequest(www));
    }

    public void Post(string url, Dictionary<string, string> formData)
    {
        //Debug.LogWarning("---- POST url: " + url);
        //Debug.LogWarning("---- POST formData: " + Json.Serialize(formData));

        WWWForm form = new WWWForm();

        foreach (var item in formData)
        {
            form.AddField(item.Key, item.Value);
        }

        //Debug.LogWarning("---- POST FORM PARAMS: " + form.data);

        WWW www = new WWW(url, form);

        StartCoroutine(WaitForRequest(www));
    }

    IEnumerator WaitForRequest(WWW www)
    {
        yield return www;
        
        if (www.responseHeaders.Count > 0)
        {
            foreach (KeyValuePair<string, string> entry in www.responseHeaders)
            {
                Debug.LogWarning("KEY: " + entry.Key + " ==== " + "VALUE: " + entry.Value);
            }
        }

        if (www.error == null)
        {
            Debug.Log("~~~~~ WWW OK: " + www.text);

            //manager.SetCookies(www.text);
        }
        else
        {
            Debug.Log("~~~~~ WWW Error: " + www.error);
        }
    }
}
