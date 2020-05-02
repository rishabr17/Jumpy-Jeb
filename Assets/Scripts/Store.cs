using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Store : MonoBehaviour {

	public UnityEngine.UI.Button normaljeb;
	public UnityEngine.UI.Button rocketjeb;
	public UnityEngine.UI.Button speedyjeb;
	public UnityEngine.UI.Button astrojeb;
	public UnityEngine.UI.Button deathjeb;
	public UnityEngine.UI.Button moneyjeb;
	public UnityEngine.UI.Button goldenjeb;

	public UnityEngine.UI.Text normaljebtext;
	public UnityEngine.UI.Text rocketjebtext;
	public UnityEngine.UI.Text speedyjebtext;
	public UnityEngine.UI.Text astrojebtext;
	public UnityEngine.UI.Text deathjebtext;
	public UnityEngine.UI.Text moneyjebtext;
	public UnityEngine.UI.Text goldenjebtext;

	private bool normaljeb2 = true;
	private bool rocketjeb2 = false;
	private bool speedyjeb2 = false;
	private bool astrojeb2 = false;
	private bool deathjeb2 = false;
	private bool moneyjeb2 = false;
	private bool goldenjeb2 = false;

	private int NumberOfCoins;

	// Use this for initialization
	void Start () {
		NumberOfCoins = PlayerPrefs.GetInt ("NumberCoins");
		normaljebtext.text = "Bought";
		PlayerPrefs.SetInt ("normaljeb", 1);

		if (PlayerPrefs.GetInt ("rocketjeb") == 1)
			rocketjeb2 = true;
		if (PlayerPrefs.GetInt ("speedyjeb") == 1)
			speedyjeb2 = true;
		if (PlayerPrefs.GetInt ("astrojeb") == 1)
			astrojeb2 = true;
		if (PlayerPrefs.GetInt ("deathjeb") == 1)
			deathjeb2 = true;
		if (PlayerPrefs.GetInt ("moneyjeb") == 1)
			moneyjeb2 = true;
		if (PlayerPrefs.GetInt ("goldenjeb") == 1)
			goldenjeb2 = true;


		switch (PlayerPrefs.GetInt ("jebtype")) {
		case(0):
			normaljebtext.text = "Selected";
			break;
		case(1):
			rocketjebtext.text = "Selected";
			break;
		case(2):
			speedyjebtext.text = "Selected";
			break;
		case(3):
			astrojebtext.text = "Selected";
			break;
		case(4):
			deathjebtext.text = "Selected";
			break;
		case(5):
			moneyjebtext.text = "Selected";
			break;
		case(6):
			goldenjebtext.text = "Selected";
			break;
		}
	}
	
	// Update is called once per frame
	void Update () {
		NumberOfCoins = PlayerPrefs.GetInt ("NumberCoins");
		if (PlayerPrefs.GetInt ("rocketjeb") == 1)
			rocketjeb2 = true;
		if (PlayerPrefs.GetInt ("speedyjeb") == 1)
			speedyjeb2 = true;
		if (PlayerPrefs.GetInt ("astrojeb") == 1)
			astrojeb2 = true;
		if (PlayerPrefs.GetInt ("deathjeb") == 1)
			deathjeb2 = true;
		if (PlayerPrefs.GetInt ("moneyjeb") == 1)
			moneyjeb2 = true;
		if (PlayerPrefs.GetInt ("goldenjeb") == 1)
			goldenjeb2 = true;
		
		switch (PlayerPrefs.GetInt ("jebtype")) {
		case(0):
			normaljebtext.text = "Selected";
			break;
		case(1):
			rocketjebtext.text = "Selected";
			break;
		case(2):
			speedyjebtext.text = "Selected";
			break;
		case(3):
			astrojebtext.text = "Selected";
			break;
		case(4):
			deathjebtext.text = "Selected";
			break;
		case(5):
			moneyjebtext.text = "Selected";
			break;
		case(6):
			goldenjebtext.text = "Selected";
			break;
		}
		int jebtype = PlayerPrefs.GetInt ("jebtype");
		if (normaljeb2 && jebtype != 0)
			normaljebtext.text = "Bought";
		if (rocketjeb2 && jebtype != 1)
			rocketjebtext.text = "Bought";
		if (speedyjeb2&& jebtype != 2)
			speedyjebtext.text = "Bought";
		if (astrojeb2&& jebtype != 3)
			astrojebtext.text = "Bought";
		if (deathjeb2&& jebtype != 4)
			deathjebtext.text = "Bought";
		if (moneyjeb2&& jebtype != 5)
			moneyjebtext.text = "Bought";
		if (goldenjeb2&& jebtype != 6)
			goldenjebtext.text = "Bought";
		
	}
	public void normaljebselect(){
		PlayerPrefs.SetInt ("jebtype",0);
	}
	public void rocketjebselect(){
		if (NumberOfCoins >= 500 && !rocketjeb2) {
			PlayerPrefs.SetInt ("rocketjeb", 1);
			PlayerPrefs.SetInt ("jebtype",1);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 500);
		}
		if(rocketjeb2)
			PlayerPrefs.SetInt ("jebtype",1);
	}
	public void speedyjebselect(){
		if (NumberOfCoins >= 500 && !speedyjeb2) {
			PlayerPrefs.SetInt ("speedyjeb", 1);
			PlayerPrefs.SetInt ("jebtype",2);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 500);
		}
		if(speedyjeb2)
			PlayerPrefs.SetInt ("jebtype",2);
	}
	public void astrojebselect(){
		if (NumberOfCoins >= 500 && !astrojeb2) {
			PlayerPrefs.SetInt ("astrojeb", 1);
			PlayerPrefs.SetInt ("jebtype",3);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 500);
		}
		if(astrojeb2)
			PlayerPrefs.SetInt ("jebtype",3);
	}
	public void deathjebselect(){
		if (NumberOfCoins >= 1000 && !deathjeb2) {
			PlayerPrefs.SetInt ("deathjeb", 1);
			PlayerPrefs.SetInt ("jebtype",4);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 1000);
		}
		if(deathjeb2)
			PlayerPrefs.SetInt ("jebtype",4);
	}
	public void moneyjebselect(){
		if (NumberOfCoins >= 1000 && !moneyjeb2) {
			PlayerPrefs.SetInt ("moneyjeb", 1);
			PlayerPrefs.SetInt ("jebtype",5);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 1000);
		}
		if(moneyjeb2)
			PlayerPrefs.SetInt ("jebtype",5);
	}
	public void goldenjebselect(){
		if (NumberOfCoins >= 3000 && !goldenjeb2) {
			PlayerPrefs.SetInt ("goldenjeb", 1);
			PlayerPrefs.SetInt ("jebtype",6);
			PlayerPrefs.SetInt ("NumberCoins", PlayerPrefs.GetInt ("NumberCoins") - 3000);
		}
		if(goldenjeb2)
			PlayerPrefs.SetInt ("jebtype",6);
	}

}
