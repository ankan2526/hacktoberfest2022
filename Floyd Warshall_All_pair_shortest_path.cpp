
// Problem Statement
// Find the shortest distances between every pair of vertices in a given weighted  graph.
// a[i][j] denotes the weight of the edge from node i to j.

void allpairshortestpath(vector<vector<int>>&a)
{        
    // 4. Floyd Warshall 
    // Algortihm to find shortest path between every pair
    // of vertices

        int n=a.size();
        int m=a[0].size();

        // n- number of nodes

        // shortest path between i to j
        // using node k
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                // Pick all vertices as source one by one
                for(int j=0;j<m;j++)
                {
                    if(a[i][k]==-1||a[k][j]==-1)
                    {
                        continue;
                    }
                    else if(a[i][j]==-1)
                    {
                        a[i][j]=a[i][k]+a[k][j];
                    }
                    else
                    {
                        a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                    }
                }
            }
        }
    }

// a[i][j] now stores shortest path from node i to j.

//     // time complexity- O(n*n*m)
//     // extra space-  O(1)
