using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformGenerator1 : MonoBehaviour {

    public GameObject cameraPoint;
    public GameObject platformGenerationPoint;
    private int level = 4;

    public GameObject platformBottom1;
    public GameObject platformBottom2;
    public GameObject platformBottom3;
    public GameObject platformBottom4;
    public GameObject platformBottom5;
    public GameObject platformBottom5_1;
	public GameObject platformBottom6;
	public GameObject platformBottom7;
	public GameObject platformBottom8;
	public GameObject platformBottom9;
	public GameObject platformBottom10;

	public GameObject boss1;
	public GameObject boss2;

    private float randomenemy;
    public int currentplatform = 1;
	private bool bosslevel = true;
	private bool bosslevel2 = true;
	public GameObject bossclone;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        randomenemy = Random.Range(0f, 100f);
		if (bossclone != null && bossclone.transform.position.x + 9f < GameObject.FindGameObjectWithTag ("MainCamera").transform.position.x) {
			GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().boss = true;
		}
        if (platformGenerationPoint.transform.position.x < cameraPoint.transform.position.x)
        {
			if (GameObject.FindGameObjectWithTag ("Player").GetComponent<Player>().points >= 500 && GameObject.FindGameObjectWithTag ("Player").GetComponent<Player>().points < 1500 && bosslevel) {
				bossclone = Instantiate (boss1, new Vector3 (boss1.transform.position.x + 5.272f * level * 3.543959f, boss1.transform.position.y, boss1.transform.position.z), boss1.transform.rotation);
				bossclone.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().bossdead = false;
				GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().boss = false;


				bossclone.SetActive(true);
				currentplatform = 100;

				//GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().boss = true;
				bosslevel = false;
			}
			else if (GameObject.FindGameObjectWithTag ("Player").GetComponent<Player>().points >= 200 && GameObject.FindGameObjectWithTag ("Player").GetComponent<Player>().points < 500 && bosslevel2) {
				bossclone = Instantiate (boss2, new Vector3 (boss2.transform.position.x + 5.272f * level * 3.543959f, boss2.transform.position.y, boss2.transform.position.z), boss2.transform.rotation);
				bossclone.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				bossclone.SetActive(true);
				currentplatform = 200;
				GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().boss = false;

				GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().bossdead = false;

				//GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ().boss = true;
				bosslevel2 = false;
			}
			else if (randomenemy > 90f && currentplatform != 1) {
				GameObject gameObject = Instantiate (platformBottom1, new Vector3 (platformBottom1.transform.position.x + 5.272f * level * 3.543959f, platformBottom1.transform.position.y, platformBottom1.transform.position.z), platformBottom1.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 1;
			} else if (randomenemy > 80f && currentplatform != 2) {
				GameObject gameObject = Instantiate (platformBottom2, new Vector3 (platformBottom2.transform.position.x + 5.272f * level * 3.543959f, platformBottom2.transform.position.y, platformBottom2.transform.position.z), platformBottom2.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 2;
			} else if (randomenemy > 70f && currentplatform != 3) {
				GameObject gameObject = Instantiate (platformBottom3, new Vector3 (platformBottom3.transform.position.x + 5.272f * level * 3.543959f, platformBottom3.transform.position.y, platformBottom3.transform.position.z), platformBottom3.transform.rotation);
				gameObject.transform.localScale = new Vector3 (3.543959f * 0.9372f, 3.543959f * 0.9372f, 3.543959f * 0.9372f);
				currentplatform = 3;
			} else if (randomenemy > 60f && currentplatform != 4) {
				GameObject gameObject = Instantiate (platformBottom4, new Vector3 (platformBottom4.transform.position.x + 5.272f * level * 3.543959f, platformBottom4.transform.position.y, platformBottom4.transform.position.z), platformBottom4.transform.rotation);
				gameObject.transform.localScale = new Vector3 (3.543959f * 0.9372f, 3.543959f * 0.9372f, 3.543959f * 0.9372f);
				currentplatform = 4;
			} else if (randomenemy > 50f && currentplatform != 5) {
				if (randomenemy > 55f) {
					GameObject gameObject = Instantiate (platformBottom5, new Vector3 (platformBottom5.transform.position.x + 5.272f * level * 3.543959f, platformBottom5.transform.position.y, platformBottom5.transform.position.z), platformBottom5.transform.rotation);
					gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
					currentplatform = 5;
				} else {
					GameObject gameObject = Instantiate (platformBottom5_1, new Vector3 (platformBottom5_1.transform.position.x + 5.272f * level * 3.543959f, platformBottom5_1.transform.position.y, platformBottom5_1.transform.position.z), platformBottom5_1.transform.rotation);
					gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
					currentplatform = 5;
				}
			} else if (randomenemy > 40f && currentplatform != 6) {
				GameObject gameObject = Instantiate (platformBottom6, new Vector3 (platformBottom6.transform.position.x + 5.272f * level * 3.543959f, platformBottom6.transform.position.y, platformBottom6.transform.position.z), platformBottom6.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 6;
			} else if (randomenemy > 30f && currentplatform != 7) {
				GameObject gameObject = Instantiate (platformBottom7, new Vector3 (platformBottom7.transform.position.x + 5.272f * level * 3.543959f, platformBottom7.transform.position.y, platformBottom7.transform.position.z), platformBottom7.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 7;
			} else if (randomenemy > 20f && currentplatform != 8) {
				GameObject gameObject = Instantiate (platformBottom8, new Vector3 (platformBottom8.transform.position.x + 5.272f * level * 3.543959f, platformBottom8.transform.position.y, platformBottom8.transform.position.z), platformBottom8.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 8;
			}else if (randomenemy > 10f && currentplatform != 9) {
				GameObject gameObject = Instantiate (platformBottom9, new Vector3 (platformBottom9.transform.position.x + 5.272f * level * 3.543959f, platformBottom9.transform.position.y, platformBottom9.transform.position.z), platformBottom9.transform.rotation);
				gameObject.transform.localScale = new Vector3 (.03543959f, .03543959f, .03543959f);
				currentplatform = 9;
			}
            else if (randomenemy > 0f)
            {
                if (currentplatform != 10)
                {
					GameObject gameObject = Instantiate(platformBottom10, new Vector3(platformBottom10.transform.position.x + 5.272f * level* 3.543959f, platformBottom10.transform.position.y, platformBottom10.transform.position.z), platformBottom10.transform.rotation);
					gameObject.transform.localScale = new Vector3(.03543959f, .03543959f, .03543959f);
					currentplatform = 10;
                }
                else
                {
					GameObject gameObject = Instantiate(platformBottom2, new Vector3(platformBottom7.transform.position.x + 5.272f * level* 3.543959f, platformBottom7.transform.position.y, platformBottom7.transform.position.z), platformBottom7.transform.rotation);
					gameObject.transform.localScale = new Vector3(.03543959f, .03543959f, .03543959f);
					currentplatform = 7;
                }
            }
            



			platformGenerationPoint.transform.position = new Vector3(platformGenerationPoint.transform.position.x + 5.272f* 3.543959f, platformGenerationPoint.transform.position.y, platformGenerationPoint.transform.position.z); 
            level++;
        }
	}
}
