// 2. Implementation of graph using "adjacent list"
// Here we implemented unweighted graph
#include <bits/stdc++.h>
using namespace std;

void print_graph(unordered_map<int, vector<int>> graph)
{
    // This is the best way to iterate over the map
    for (auto x : graph)
    {
        cout << "Node: " << x.first << " Neighbours : ";
        for (int t : x.second)
        {
            cout << t << " ";
        }
        cout << endl;
    }
}

int main()
{

    // Information is given in the form of list
    vector<vector<int>> edgeList = {{1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3}};

    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < edgeList.size(); ++i)
    {
        int a = edgeList[i][0], b = edgeList[i][1];
        graph[a].push_back(b), graph[b].push_back(a);
    }

    print_graph(graph);

    //(important):-
    // For implementing the "weighted graph" we use the
    //   unordered_map<int, vector<pair<int, int>>> graph;
    // Here pair point the each node weight

    return 0;
}