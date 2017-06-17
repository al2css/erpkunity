using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetUrl : MonoBehaviour {

    public string url;

	// Use this for initialization
	void Start () {
        //url = "https://www.erepublik.com/en/main/city-data/116/overview";
        WWW www = new WWW(url);

        StartCoroutine(WaitForRequest(www));

    }

    IEnumerator WaitForRequest(WWW www)
    {
        yield return www;

        if(www.error == null)
        {
            Debug.Log("WWW OK: " + www.text);
        } else
        {
            Debug.Log("WWW Error: " + www.error);
        }
    }
	
}
