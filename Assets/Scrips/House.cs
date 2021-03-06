using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class House : MonoBehaviour
{
    private GameObject currentPrefab;
    private GameController gameController;
    [SerializeField] private int resouces = 0;
    [SerializeField] private int level = 0;
    [SerializeField] private List<GameObject> prefabs = new List<GameObject>();
    [SerializeField] Person personPrefab;

    public void Reset() {
        resouces = 0;
        level = 0;
    }

    public void AddResouce(int amount)
    {
        resouces += amount;
        if (resouces > level * level * 3)
        {
            level += 1;
            var newPerson = gameController.createPerson(transform.position);
            newPerson.house = this;
            if (level == prefabs.Count)
            {
                level = 0;
                newPerson.house = null;
            }
            UpdatePrefab();
        }
    }

    public GameObject GetPrefab()
    {
        Debug.Log(prefabs.Count);
        return prefabs[level < prefabs.Count - 1 ? level : prefabs.Count - 1];
    }

    void Start()
    {
        gameController = FindObjectOfType<GameController>();
        UpdatePrefab();
    }

    void UpdatePrefab()
    {
        Destroy(currentPrefab);
        currentPrefab = Instantiate(GetPrefab(), position: transform.position, rotation: transform.rotation);
        currentPrefab.transform.localScale = new Vector3(x: 10, y: 10, z: 10);
        currentPrefab.transform.SetParent(transform);
    }
}