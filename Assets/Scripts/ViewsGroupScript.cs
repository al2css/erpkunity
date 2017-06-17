using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ViewsGroupScript : MonoBehaviour {

    void Start()
    {
        Debug.LogWarning("ViewsGroupScript Start Function");
        foreach(Transform view in transform)
        {
            var viewIndex = view.GetSiblingIndex() + 1;
            view.Find("Text").GetComponent<Text>().text = "View " + viewIndex;
            TabsGroupScript.tabsGroupScript.views.Add(view);
        }

        TabsGroupScript.tabsGroupScript.MergeLists();
    }
    
}
