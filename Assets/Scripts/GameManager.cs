using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Facebook.MiniJSON;

public class GameManager : MonoBehaviour {

    public static GameManager gameManager;

    void Awake()
    {
        if (gameManager == null)
            gameManager = this;
    }

	// Use this for initialization
	void Start () {
        Debug.Log("GameManager Start");	
	}

}
