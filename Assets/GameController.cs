using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    [SerializeField] private Vector2 size;
    [SerializeField] private GameObject island;
    [SerializeField] private int treeDensity = 0;
    private List<GameObject> trees = new List<GameObject>();
    [SerializeField] private GameObject treePrefab;
    public int population = 0;
    private List<Gatherer> people = new List<Gatherer>();
    [SerializeField] private GameObject personPrefab;
    [SerializeField] private House house;

    void Start()
    {
        GenerateIsland();
        PlantTrees();
        SpawnPopulation();
        house.Reset();
    }

    private void GenerateIsland()
    {
        Instantiate(island, position: new Vector3(0, -5, 0), rotation: Quaternion.identity);
    }

    void Update()
    {
        foreach (Gatherer person in people)
        {
            person.resources = trees;
        }
    }

    
    // Update is called once per frame
    void PlantTrees()
    {
        for (int tree = 0; tree < treeDensity*size.x*size.y/100; tree++)
        {
            float x = UnityEngine.Random.value * size.x;
            float z = UnityEngine.Random.value * size.y;
            Vector3 newPosition = new Vector3(x, 12, z);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    PlantTree(newPosition);
                }
            }
        }
    }

    public void PlantTree(Vector3 newPosition)
    {
        Debug.Log("Planting tree" + newPosition);
        trees.Add(Instantiate(original: treePrefab, position: newPosition, rotation: Quaternion.identity));
    }

    void SpawnPopulation()
    {
        for (int person = 0; person < population; person++)
        {
            float x = UnityEngine.Random.value * 20;
            float z = UnityEngine.Random.value * 20;
            Vector3 newPosition = new Vector3(x, 12, z);
            var ray = new Ray(newPosition, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<Plantable>();
                if (selection != null)
                {
                    var newPerson = Instantiate(original: personPrefab, position: hit.point, rotation: Quaternion.identity).GetComponent<Gatherer>();
                    newPerson.resources = trees;
                    newPerson.house = house;
                    people.Add(newPerson);
                }
            }
        }
    }
}
