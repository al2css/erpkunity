using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Facebook.Unity;
using Facebook.MiniJSON;
using Assets.Scripts;

public class FBScript : MonoBehaviour {

    public GameObject DialogLoggedIn;
    public GameObject DialogLoggedOut;
    public GameObject Username;
    public GameObject Userpic;
    public static FBScript fbScript;

    WebRequest webRequestInstance;

    void Awake()
    {
        if (fbScript == null)
            fbScript = this;

        webRequestInstance = WebRequest.webRequest;
        
        if (!FB.IsInitialized)
        {
            FB.Init(InitCallback, OnHideUnity);
        } else
        {
            Debug.LogWarning("FB is not initialized");
        }
    }

    void InitCallback()
    {
        if(FB.IsLoggedIn)
        {
            Debug.Log("Fb is logged in");
        } else
        {
            Debug.Log("FB is not logged in");
        }

        SetAppView(FB.IsLoggedIn);
    }

    void OnHideUnity(bool isGameShown)
    {
        if(!isGameShown)
        {
            Time.timeScale = 0;
            Debug.LogWarning("Game not shown");
        } else
        {
            Time.timeScale = 1;
            Debug.LogWarning("Game shown");
        }
    }

    public void FBLogin()
    {
        List<string> permissions = new List<string>();
        permissions.Add("public_profile");
        permissions.Add("email");
        permissions.Add("user_friends");

        FB.LogInWithReadPermissions(permissions, AuthCallback);
    }

    void AuthCallback(IResult result)
    {
        if (result.Error != null)
        {
            Debug.LogWarning(result.Error);
        } else
        {
            //var objs = Json.Serialize(result.ResultDictionary);
            //Debug.LogWarning("### AuthCallback JSON Object: " + objs);
            
            if (FB.IsLoggedIn)
            {
                Debug.Log("AuthCallback - Fb is logged in");

                LoginToErpk(result);
            }
            else
            {
                Debug.Log("AuthCallback - FB is not logged in");
            }
        }
    }

    void LoginToErpk(IResult result)
    {
        var loginUrl = "https://www.erepublik.com/en/main/mobile-facebook-login";
        Dictionary<string, string> formData = new Dictionary<string, string>();

        formData.Add("accessToken", result.ResultDictionary["access_token"].ToString());
        formData.Add("facebookId", result.ResultDictionary["user_id"].ToString());
        formData.Add("expiresAt", result.ResultDictionary["expiration_timestamp"].ToString());
        formData.Add("developer", "Alex");
        
        StartCoroutine(webRequestInstance.PostRequest(loginUrl, formData));
    }

    public IEnumerator LoginSuccess(JSONObject obj)
    {
        Debug.Log("LoginSuccess Function: " + obj);

        LoginJsonHandler loginJson = new LoginJsonHandler(obj);

        if (loginJson.message == "Success" && !loginJson.error)
        {
            var userAvatarUrl = loginJson.citizen.avatar.Replace(@"\", "");

            SetAppView(!loginJson.error);

            DisplayUsername(loginJson.citizen.name);
            if (loginJson.citizen.has_avatar == "1") {
                StartCoroutine(webRequestInstance.GetTexture(userAvatarUrl));
            }

        } else
        {
            SetAppView(!loginJson.error);
        }

        yield return null;
    }

    void SetAppView(bool isLoggedIn)
    {
        if(isLoggedIn)
        {
            DialogLoggedIn.SetActive(true);
            DialogLoggedOut.SetActive(false);
            
            //FB.API("/me?fields=first_name", HttpMethod.GET, DisplayFBUsername);
            //FB.API("/me/picture?type=square&height=64&width=64", HttpMethod.GET, DisplayFBUserPic);

            TabsGroupScript.tabsGroupScript.ActivateFirstView();
        } else
        {
            DialogLoggedIn.SetActive(false);
            DialogLoggedOut.SetActive(true);
        }
    }
    
    void DisplayUsername(string name)
    {
        Text username = Username.GetComponent<Text>();
        username.text = "" + name;
    }

    public IEnumerator DisplayUserAvatar(Texture2D img)
    {
        Image userpic = Userpic.GetComponent<Image>();
        userpic.sprite = Sprite.Create(img, new Rect(0, 0, img.width, img.height), new Vector2(0, 0));
        yield return null;
    }

    void DisplayFBUsername(IResult result)
    {
        //var objs = Json.Serialize(result.ResultDictionary);
        //Debug.LogWarning("### DisplayUsername JSON Object: " + objs);

        Text username = Username.GetComponent<Text>();

        if (result.Error == null)
        {
            username.text = "" + result.ResultDictionary["first_name"];
        }
        else
        {
            Debug.LogWarning("DisplayUsername error: " + result.Error);
        }
    }

    void DisplayFBUserPic(IGraphResult result)
    {
        if (result.Texture != null)
        {
            Image userpic = Userpic.GetComponent<Image>();
            userpic.sprite = Sprite.Create(result.Texture, new Rect(0,0,64,64), new Vector2());
        }        
    }

}
