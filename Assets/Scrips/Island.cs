using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(MeshFilter))]
public class Island : MonoBehaviour
{
    public int xSize = 20;
    public int zSize = 20;
    private Mesh mesh;
    private Vector3[] vertices;
    private int[] triangles;

    void Start()
    {
        mesh = new Mesh();
        MeshFilter mf = GetComponent<MeshFilter>();
        mf.mesh = mesh;
        GenerateIsland();
        UpdateMesh();
        GetComponent<MeshCollider>().sharedMesh = mf.mesh;
        GetComponent<NavMeshSurface>().BuildNavMesh();
    }

    private void GenerateIsland()
    {
        float noiseScale = 0.05f;
        float heigthScale = 12f;
        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        for (int i = 0, z = 0; z < zSize + 1; z++)
        {
            for (int x = 0; x < xSize + 1; x++)
            {
                float y = Mathf.PerlinNoise(x * noiseScale, z * noiseScale) * heigthScale ;
                vertices[i] = new Vector3(x, y, z);
                i++;
            }
        }

        int vert = 0;
        int tris = 0;
        triangles = new int[xSize * zSize * 6];

        for (int z = 0; z < zSize; z++)
        {
            for (int x = 0; x < xSize; x++)
            {

                triangles[tris + 0] = vert + 0;
                triangles[tris + 1] = vert + xSize + 1;
                triangles[tris + 2] = vert + 1;
                triangles[tris + 3] = vert + 1;
                triangles[tris + 4] = vert + xSize + 1;
                triangles[tris + 5] = vert + xSize + 2;

                vert += 1;
                tris += 6;
            }
            vert += 1;
        }

    }

    void UpdateMesh()
    {
        mesh.Clear();

        mesh.vertices = vertices;
        mesh.triangles = triangles;

        mesh.RecalculateNormals();
    }
}
