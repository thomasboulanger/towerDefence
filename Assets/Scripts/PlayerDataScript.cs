using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PlayerLoop;

public class PlayerDataScript : MonoBehaviour
{
    public static PlayerDataScript singleton;
    public int money;

    private void Awake()
    {
        singleton = this;
    }
}
