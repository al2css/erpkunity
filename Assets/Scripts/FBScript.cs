using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Facebook.Unity;
using Facebook.MiniJSON;

public class FBScript : MonoBehaviour {

    public GameObject DialogLoggedIn;
    public GameObject DialogLoggedOut;
    public GameObject Username;
    public GameObject Userpic;

    WWWHelper reqManager;
    TabsGroupScript views;

    void Awake()
    {
        reqManager = WWWHelper.wwwHelper;
        
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

        ShowIfLogged(FB.IsLoggedIn);
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
            var objs = Json.Serialize(result.ResultDictionary);
            Debug.LogWarning("### AuthCallback JSON Object: " + objs);
            
            if (FB.IsLoggedIn)
            {
                Debug.Log("AuthCallback - Fb is logged in");

                LoginToErpk(result);
            }
            else
            {
                Debug.Log("AuthCallback - FB is not logged in");
            }

            ShowIfLogged(FB.IsLoggedIn);
        }
    }

    void LoginToErpk(IResult result)
    {
        var objs = Json.Serialize(result.ResultDictionary);
        Debug.LogWarning("@@@ LoginToErpk JSON Object: " + objs);

        var loginUrl = "https://www.erepublik.com/en/main/mobile-facebook-login";
        Dictionary<string, string> formData = new Dictionary<string, string>();

        formData.Add("accessToken", result.ResultDictionary["access_token"].ToString());
        formData.Add("facebookId", result.ResultDictionary["user_id"].ToString());
        formData.Add("expiresAt", result.ResultDictionary["expiration_timestamp"].ToString());
        formData.Add("developer", "Alex");

        reqManager.Post(loginUrl, formData);
    }

    void ShowIfLogged(bool isLoggedIn)
    {
        if(isLoggedIn)
        {
            DialogLoggedIn.SetActive(true);
            DialogLoggedOut.SetActive(false);

            FB.API("/me?fields=first_name", HttpMethod.GET, DisplayUsername);
            FB.API("/me/picture?type=square&height=64&width=64", HttpMethod.GET, DisplayUserPic);

            TabsGroupScript.tabsGroupScript.ActivateFirstView();
        } else
        {
            DialogLoggedIn.SetActive(false);
            DialogLoggedOut.SetActive(true);
        }
    }
    
    void DisplayUsername(IResult result)
    {
        var objs = Json.Serialize(result.ResultDictionary);
        Debug.LogWarning("### DisplayUsername JSON Object: " + objs);

        Text username = Username.GetComponent<Text>();

        if(result.Error == null)
        {
            username.text = "" + result.ResultDictionary["first_name"];
        } else
        {
            Debug.LogWarning("DisplayUsername error: " + result.Error);
        }
    }

    void DisplayUserPic(IGraphResult result)
    {
        if (result.Texture != null)
        {
            Image userpic = Userpic.GetComponent<Image>();
            userpic.sprite = Sprite.Create(result.Texture, new Rect(0,0,64,64), new Vector2());
        }        
    }

}
