using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(MeshFilter))]
public class Island : MonoBehaviour
{
    public int height;
    public int xSize;
    public int zSize;
    public float samplingScale;
    public int octaves;
    public float persistence; // 0-1
    public float lacunarity; // >1
    public int seed;
    public Vector2 offset;

    private Mesh mesh;
    private MeshFilter mf;
    private Vector3[] vertices;
    private int[] triangles;

    void Start()
    {
        mesh = new Mesh();
        mf = GetComponent<MeshFilter>();
        mf.mesh = mesh;
        GenerateIsland(null);

    }

    public void GenerateIsland(float[,] noiseMap)
    {
        GenerateMesh(noiseMap);
        UpdateMesh();
        GetComponent<MeshCollider>().sharedMesh = mf.mesh;
        GetComponent<NavMeshSurface>().BuildNavMesh();
    }

    private void GenerateMesh(float[,] noiseMap)
    {
        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        if (noiseMap == null)
        {
            noiseMap = Noise.Generate(xSize + 1, zSize + 1, seed, samplingScale, octaves, persistence, lacunarity, offset);
        }

        for (int i = 0, z = 0; z < zSize; z++)
        {
            for (int x = 0; x < xSize ; x++)
            {
                vertices[i] = new Vector3(x, noiseMap[x, z] * height, z);
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
