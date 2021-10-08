using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

public class UIScript : MonoBehaviour
{
    //public GoalScript GoalScriptInstance;
    [SerializeField]
    private TextMeshProUGUI _wave;
    [SerializeField]
    private TextMeshProUGUI _money;
    [SerializeField]
    private TextMeshProUGUI _hp;
    [SerializeField]
    private TextMeshProUGUI _enemyLeft;
    [SerializeField]
    private TextMeshProUGUI _nextWaveTimer;
    
    void Start()
    {
        
    }

    void Update()
    {
        _wave.text = SpawnerScript.waveCounter.ToString();
        //_money.text = ;
        _hp.text = GoalScript.currentGoal.Hp.ToString();
        _enemyLeft.text = EnemyScript.Enemys.Count.ToString();
        if (SpawnerScript.onWave)
        {
            _nextWaveTimer.text = " ";
        }
        else
        {
            _nextWaveTimer.text = SpawnerScript.waveTime.ToString("0");
        }
    }
}
