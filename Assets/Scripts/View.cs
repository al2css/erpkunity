using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class View : MonoBehaviour {

    public static View viewManager;
    public string viewName;

    string gameObjectName;
    string viewUrl = "";
    WebRequest webRequestInstance;

    void Awake()
    {
        if(viewManager == null)
        {
            viewManager = this;
        }

        webRequestInstance = WebRequest.webRequest;
    }
    
    // Use this for initialization
	void OnEnable () {
        if(gameObject.activeInHierarchy)
        {
            gameObject.transform.Find("Text").GetComponent<Text>().text = viewName;
            gameObjectName = gameObject.name;

            switch(gameObjectName)
            {
                case "articles":
                    viewUrl = "https://www.erepublik.com/en/main/home-news/100/1/latest/1";
                    break;
                default:
                    viewUrl = "https://www.erepublik.com/en/military/military-unit-data/?groupId=476&panel=" + gameObjectName;
                    break;
            }
            Debug.LogWarning(viewUrl);
            StartCoroutine(webRequestInstance.GetRequest(viewUrl));
        }
    }

    public IEnumerator ViewResponse(JSONObject obj)
    {
        Debug.Log("View response obj: " + obj);

        yield return null;
    }

}
