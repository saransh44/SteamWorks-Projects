using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

	Text TimerText;
	public float MinutesOfGamePlay = 1;

	public GameObject GameOver;

	float timer;

	void Start () {
		
		TimerText = GetComponent<Text> ();
		GameOver.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {

		timer = (MinutesOfGamePlay * 60) - Time.time;

		TimerText.text = ((int)timer / 60).ToString() + ":" + ((int)timer % 60).ToString();

		if (timer <= 0) {
			GameOver.SetActive (true);
			gameObject.SetActive (false);
		}
	}
}
