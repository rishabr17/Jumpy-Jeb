using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyPlatform : MonoBehaviour
{

    public GameObject platformpointahead;
    public GameObject platformpointbehind;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (gameObject.transform.position.x < platformpointahead.transform.position.x && gameObject.transform.position.x > platformpointbehind.transform.position.x)
        {
            Destroy(gameObject);
        }
    }
}

