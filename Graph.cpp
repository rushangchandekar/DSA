#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V; // Number of vertices
    list<int> *l; //int *arr

public:
    Graph(int V) {
        this->V = V;
        //arr = new int[V];
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // void printAdjList() {
    //     for (int i = 0; i < V; i++) {
    //         cout << "Vertex " << i << ": ";
    //         for (int neigh : l[i]) {
    //             cout << neigh << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    //BFS Traversal
    void bfs() {
        queue<int> Q;
        vector<bool> vis(V, false);

        Q.push(0);
        vis[0] = true;

        while(Q.size() > 0) {
            int u = Q.front(); //u-v
            Q.pop();
            cout << u << " ";

            for(int v : l[u]) { //v -> immediate neighbour
                if(!vis[v]) {
                    Q.push(v);
                    vis[v] = true;
                }
            }
        }
    }

    //DFS Traversal
    void dfsHelper(int u, vector<bool> &vis) {
        cout << u << " ";
        vis[u] = true;

        for(int v : l[u]) {
            if(!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {
        int src = 0;
        vector<bool> vis(V, false);

        dfsHelper(src, vis);
    }

    //Cycle Detection in Undirected Graph using DFS

    // bool isCycleUndirDFS(int src, int par, vector<bool> &vis) {
    //     vis[src] = true;
    //     list<int> neighbours = l[src];

    //     for(int v : neighbours) {
    //         if(!vis[v]) {
    //             if(isCycleUndirDFS(v, src, vis)) {
    //                 return true;
    //             }
    //         } else if(v != par) {
    //             return true;
    //         }
    //     }

    //     return false;
    // }

    // bool isCycle() {
    //     vector<bool> &vis(V, false);

    //     for(int i = 0; i < V; i++) {
    //         if(!vis[i]) {
    //             if(isCycleUndirDFS(i, -1, vis)) {
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }

    //Cycle Detection in Undirected Graph using BFS

    bool isCycleUndirBFS(int src, vector<bool> &vis) {
        queue<pair<int, int>> q; //{node, parent}
        q.push({src, -1});
        vis[src] = true;

        while(q.size() > 0) {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbours = l[u];
            for(int v : neighbours) {
                if(!vis[v]) {
                    q.push({v, u});
                    vis[v] = true;
                } else if(v != parU) {
                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle() {
        vector<bool> vis(V, false);

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(isCycleUndirBFS(i, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Graph g(5);

    // g.addEdge(0, 1);
    // g.addEdge(1, 2);
    // g.addEdge(1, 3);
    // g.addEdge(2, 3);
    // g.addEdge(2, 4);

    // g.printAdjList();

    // g.bfs();

    // g.addEdge(0, 1);
    // g.addEdge(1, 2);
    // g.addEdge(1, 3);
    // g.addEdge(2, 4);

    // cout << "DFS Traversal: ";
    // g.dfs();

    // cout << endl;

    // cout << "BFS Traversal: ";
    // g.bfs();

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    cout << g.isCycle() << endl;

    return 0;
}