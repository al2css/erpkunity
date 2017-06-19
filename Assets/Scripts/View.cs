using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class View : MonoBehaviour {

    public static View viewManager;
    string viewUrl;
    WWWHelper requestManager;

    void Awake()
    {
        if(viewManager == null)
        {
            viewManager = this;
        }
        
        requestManager = WWWHelper.wwwHelper;
    }
    
    // Use this for initialization
	void OnEnable () {
        if(gameObject.activeInHierarchy)
        {
            viewUrl = gameObject.name;
            var url = "https://www.erepublik.com/en/military/military-unit-data/?groupId=476&panel=" + viewUrl;
            Debug.LogWarning(url);
            requestManager.Get(url);
        }
    }
        
    }
