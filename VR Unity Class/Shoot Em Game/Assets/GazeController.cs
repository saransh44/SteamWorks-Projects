using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazeController : MonoBehaviour {

	public Transform RaycastOrigin;
	public GameObject Winner;
	GameObject Selected1, Selected2;
	public int score;
	public int WinnerValue;

	// Update is called once per frame
	void Update () {
		RaycastHit hit;
		if (Physics.Raycast (RaycastOrigin.position, RaycastOrigin.forward, out hit)) {
			if (Selected1 == null) {
				Selected1 = hit.transform.gameObject;
				Selected1.transform.tag = "Active";
			}
			else if (Selected2 == null && hit.transform.gameObject != Selected1) {
				Selected2 = hit.transform.gameObject;
				Selected2.transform.tag = "Active";
			}
			else if (Selected1 && Selected2) {
				if (Selected1.CompareTag ("Selected") && Selected2.CompareTag ("Selected")) {
					if (Selected1.transform.parent.tag == Selected2.transform.parent.tag) {
						Selected1.transform.parent.gameObject.SetActive(false);
						Selected2.transform.parent.gameObject.SetActive(false);

						Selected1.transform.tag = "Disabled";
						Selected2.transform.tag = "Disabled";
						
						score++;
						if (score == WinnerValue) {
							Winner.SetActive(true);
						}
					}
					else {
						Selected1.transform.tag = "Disabled";
						Selected2.transform.tag = "Disabled";
					}
				}
			}
		}
		else if (Selected1 && !Selected1.CompareTag ("Selected")) {
			Selected1.tag = "Untagged";
			Selected1 = null;
		}
		else if (Selected2 && !Selected2.CompareTag ("Selected")) {
			Selected2.tag = "Untagged";
			Selected2 = null;
		}
	}
}
