using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerScript : MonoBehaviour
{
    public GameObject canvas;
    public GameObject tower;
    public bool isUIActive;
    private RectTransform myRectTransform;
    void Start()
    {
        isUIActive = false;
    }

    private void OnMouseDown()
    {
        if (transform.name.Contains("TowerPosition"))
        {
            if (isUIActive)
            {
                isUIActive = false;
                canvas.SetActive(false);
            }
            else
            {
                isUIActive = true;
                canvas.SetActive(true);
            }
        }
        else
        {
            if (isUIActive)
            {
                isUIActive = false;
                canvas.SetActive(false);
            }
            else
            {
                isUIActive = true;
                canvas.SetActive(true);
            }
        }
    }

    public void TowerPositionButton()
    {
        if (PlayerDataScript.singleton.money >= 50)
        {
            GameObject go = Instantiate(tower, transform.position, Quaternion.identity);
            if (transform.name.Contains("1")||transform.name.Contains("2")||transform.name.Contains("3"))
            {
                myRectTransform = go.transform.GetChild(0).GetComponent<RectTransform>();
                myRectTransform.localPosition += Vector3.forward * 8;
                Debug.Log(myRectTransform);
            }
            canvas.SetActive(false);
            PlayerDataScript.singleton.money -= 50;
        }
    }
}
