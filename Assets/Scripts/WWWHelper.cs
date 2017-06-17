using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WWWHelper : MonoBehaviour {

    public static WWWHelper wwwHelper;

    void Awake()
    {
        if (wwwHelper == null)
            wwwHelper = this;
    }

    public void Get(string url)
    {
        WWW www = new WWW(url);

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
