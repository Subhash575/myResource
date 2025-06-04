// #1 Graph Implementation using adjacent Matrix.
// Here we also implemented unweighted graph.
#include <bits/stdc++.h>
using namespace std;

void print_graph(vector<vector<int>> adjacentMatrix)
{
    for (int i = 1; i < adjacentMatrix.size(); ++i)
    {
        cout << "Node: " << i << " Neighbours: ";
        for (int j = 1; j < adjacentMatrix.size(); ++j)
        {
            if (adjacentMatrix[i][j] == 1)
                cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Information is given in the form of list
    vector<vector<int>> edgeList = {{1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3}};

    // undirected graph given {important to note during implementation}
    //  For creating adjacentMatrix remember number of node and make on extra Node for
    // 0 index
    vector<vector<int>> adjacentMatrix(5, vector<int>(5, 0));
    for (int i = 0; i < edgeList.size(); ++i)
    {
        int a = edgeList[i][0];
        int b = edgeList[i][1];

        adjacentMatrix[a][b] = 1;
        // bcs "undirectional graph"
        adjacentMatrix[b][a] = 1;
    }

    print_graph(adjacentMatrix);

    return 0;
}