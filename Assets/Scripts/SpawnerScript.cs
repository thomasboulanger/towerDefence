using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class SpawnerScript : MonoBehaviour
{
    public GameObject Enemy;
    [Range(0, 2)] 
    public float spawnRateDelay;
    public static float delayBetweenWaves = 30f;
    
     static int enemyCounter;
    //public TimerBetweenWaves timerBetweenWaves = new TimerBetweenWaves(delayBetweenWaves);
    
    private float _timer;
    private float _enemyByWave = 10;


    public static bool onWave; 
    public static float waveTime;
    public static int waveCounter;

    private void Start()
    {
        waveTime = delayBetweenWaves;
    }

    void Update()
    {
        if (!onWave)
        {
            //faire un time.deltatime custom sur un script a part et le mettre en reference ici a la place de cette merde...
            waveTime -= Time.deltaTime / GameObject.FindGameObjectsWithTag("Spawner").Length;
        }
        else
        {
            _timer += Time.deltaTime;
        }

        if (waveTime <= 0f)
        {
            onWave = true;
            delayBetweenWaves -= 2f;
            waveTime = delayBetweenWaves;
            waveCounter++;
            if (waveTime >= delayBetweenWaves) 
            {
                waveTime = delayBetweenWaves;
            }
        }
        if (_timer >= spawnRateDelay && onWave) 
        {
            enemyCounter++;

            Instantiate(Enemy, transform.position, Quaternion.identity);
            if (enemyCounter >= _enemyByWave)
            {
                onWave = false;
                enemyCounter = 0;
                _enemyByWave += 5;
            }
            _timer = 0f;
        }
        
        /*if (!timerBetweenWaves.onWave)
        {
            timerBetweenWaves.Timer += Time.deltaTime;
        }
        else
        {
            _timer += Time.deltaTime;
        }

        if (_timer >= spawnRateDelay && timerBetweenWaves.onWave) 
        {
            enemyCounter++;

            Instantiate(Enemy, transform.position, Quaternion.identity);
            if (enemyCounter >= 10)
            {
                timerBetweenWaves.onWave = false;
                enemyCounter = 0;
            }
            _timer = 0f;
        }*/
    }
}

/*public class TimerBetweenWaves
{
    public bool onWave;
    public float time;
    public int waveCounter;
    private float _waveTimer;

    public float Timer
    {
        get { return time; }
        set
        {
            time = value;
            if (time >= _waveTimer)
            {
                time = 0f;
                onWave = true;
                //_waveTimer -= 5f;
                waveCounter++;
                if (_waveTimer <= 0) 
                {
                    _waveTimer = 0;
                }
            }
        }
    }

    public TimerBetweenWaves(float timer)
    {
        _waveTimer = timer;
    }
}*/
