using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.EventSystems;

public class TabsGroupScript : MonoBehaviour {

    ExtensionsToggleGroup tabsGroupInstance;
    public List<Transform> views = new List<Transform>();
    public List<Transform> tabs = new List<Transform>();

    public Dictionary<Transform, Transform> Views = new Dictionary<Transform, Transform>();

    public static TabsGroupScript tabsGroupScript;
    
    void Awake()
    {
        //Debug.LogWarning("TabsGroupScript Awake Function");

        tabsGroupInstance = GetComponent<ExtensionsToggleGroup>();

        if (tabsGroupScript == null)
            tabsGroupScript = this;

        foreach (Transform tab in transform)
        {
            var tabIndex = tab.GetSiblingIndex() + 1;
            tab.Find("Label").GetComponent<Text>().text = "Tab " + tabIndex;
            tabs.Add(tab);
        }

    }

    // Use this for initialization
    void Start()
    {
        //Debug.LogWarning("TabsGroupScript Start Function");
    }

    public void MergeLists()
    {
        for (int i = 0; i < tabs.Count; i++)
        {
            //Debug.LogError(i);
            Views.Add(tabs[i], views[i]);
        }
    }

    public void SetActiveView(bool non)
    {
        views.ForEach((view) =>
        {
            view.gameObject.SetActive(false);
        });

        foreach (var toggle in tabsGroupInstance.ActiveToggles())
        {
            var activeView = Views[toggle.transform];
            activeView.gameObject.SetActive(true);

            Debug.Log("SetActiveTab tab: " + activeView.gameObject);
        }
        
    }

    public void ActivateFirstView()
    {
        Debug.LogWarning("ActivateFirstView Function");
        SetActiveView(true);
    }

}
