using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameoverhighscore : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {
		gameObject.GetComponent<UnityEngine.UI.Text>().text = "High Score: " + PlayerPrefs.GetInt("highScore");
    }

    // Update is called once per frame
    void Update()
    {
    }
}