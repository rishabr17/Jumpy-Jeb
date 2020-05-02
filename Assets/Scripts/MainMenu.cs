using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

    private bool gamestart = false;
    private bool mainmenustart = false;
	private bool storestart = false;
    public SpriteRenderer fadeout;
    private float alpha = 0f;
	private GameObject camera;

	// Use this for initialization
	void Start () {
		camera = GameObject.FindGameObjectWithTag ("MainCamera");
        gamestart = false;
        mainmenustart = false;
		fadeout.color = new Color(0, 0, 0, alpha);
        alpha = 0f;
		Application.targetFrameRate = 60;
		Time.timeScale = 1f;
	}
	
	// Update is called once per frame
	void Update () {
        if (gamestart)
        {
				alpha += .03f;
				fadeout.color = new Color(fadeout.color.r, fadeout.color.g, fadeout.color.b, alpha);
				camera.GetComponent<AudioSource> ().volume -= .005f;
			if (alpha >= 1f) {
				SceneManager.LoadSceneAsync ("Jumpy Jeb", LoadSceneMode.Single);
				

				//Fade the loading screen out he
				gamestart = false;
			}
            

        }
        if (mainmenustart)
        {
            alpha += .03f;
            fadeout.color = new Color(0, 0, 0, alpha);
			camera.GetComponent<AudioSource> ().volume -= .005f;
            if (alpha >= 1f)
            {
                SceneManager.LoadSceneAsync("MainMenu", LoadSceneMode.Single);
				mainmenustart = false;
            }
        }
		if (storestart)
		{
			alpha += .03f;
			fadeout.color = new Color(fadeout.color.r, fadeout.color.g, fadeout.color.b, alpha);
			camera.GetComponent<AudioSource> ().volume -= .005f;
			if (alpha >= 1f) {
				SceneManager.LoadSceneAsync ("MainMenu2", LoadSceneMode.Single);

				storestart = false;
			}

		}
    }
    public void survivalMode()
    {
		if(!mainmenustart && !storestart)
        	gamestart = true;
        
    }
    public void mainmenu()
    {
		if(!gamestart && !storestart)
        	mainmenustart = true;

    }
	public void store()
	{
		if(!gamestart && !mainmenustart)
			storestart = true;

	}
}
