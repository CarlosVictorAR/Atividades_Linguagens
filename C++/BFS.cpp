#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> grafo(n+1);
    for (int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    vector<bool> p(n+1,false);
    queue <int> q;
    vector<int> vis(n+1,0);
    q.emplace(1);
    vis[1] = 1;

    while (q.size() != 0){
        int vertice = q.front();
        for (int i = 0; i < grafo[vertice].size(); i++){
            int res = grafo[vertice][i];
            if (vis[res] == 0){
                q.push(res);
                vis[res] = 1;
            }
        }
        cout << q.front();
        q.pop();
    }

}
