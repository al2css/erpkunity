using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PostUrl : MonoBehaviour {
    public string url;

	// Use this for initialization
	void Start () {
        WWWForm form = new WWWForm();

        //form.AddField("var1", "value1");
        //form.AddField("var1", "value1");

        WWW www = new WWW(url, form);

        StartCoroutine(WaitForRequest(www));
    }

    IEnumerator WaitForRequest(WWW www)
    {
        yield return www;

        if (www.error == null)
        {
            Debug.Log("WWW OK: " + www.text);
        }
        else
        {
            Debug.Log("WWW Error: " + www.error);
        }
    }
	
}
