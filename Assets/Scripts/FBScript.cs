using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Facebook.Unity;
using Facebook.MiniJSON;

public class FBScript : MonoBehaviour {

    public GameObject DialogLoggedIn;
    public GameObject DialogLoggedOut;
    public GameObject Username;
    public GameObject Userpic;

    TabsGroupScript views;

    void Awake()
    {
        if(!FB.IsInitialized)
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
        if(result.Error != null)
        {
            Debug.LogWarning(result.Error);
        } else
        {
            
            if (FB.IsLoggedIn)
            {
                Debug.Log("AuthCallback - Fb is logged in");
            }
            else
            {
                Debug.Log("AuthCallback - FB is not logged in");
            }

            ShowIfLogged(FB.IsLoggedIn);
        }
    }

    void ShowIfLogged(bool isLoggedIn)
    {
        if(isLoggedIn)
        {
            DialogLoggedIn.SetActive(true);
            DialogLoggedOut.SetActive(false);

            FB.API("/me?fields=first_name", HttpMethod.GET, DisplayUsername);
            FB.API("/me/picture?type=square&height=64&width=64", HttpMethod.GET, DisplayUserPic);

            FB.API("/debug_token?input_token=" + FB.ClientToken + "&access_token=" + FB.ClientToken, HttpMethod.GET, AccessTokenCallback);
            
            TabsGroupScript.tabsGroupScript.ActivateFirstView();
        } else
        {
            DialogLoggedIn.SetActive(false);
            DialogLoggedOut.SetActive(true);
        }
    }

    void AccessTokenCallback(IResult result)
    {
        var objs = Json.Serialize(result.ResultDictionary);
        Debug.LogWarning("### AccessTokenCallback JSON Object: " + objs);
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
