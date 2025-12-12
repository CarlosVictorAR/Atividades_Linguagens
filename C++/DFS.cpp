#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grafos;
vector<int>ordem;
vector<int>vis;
void dfs(int u){
    for (int v : grafos[u]){
        if (vis[v] == 0){
            ordem.push_back(v);
            vis[v] = 1;
            dfs(v);
        }
    }
    return;
}
int main(){
    int n,m;
    cin >> n >> m;
    grafos = vector<vector<int>>(n+1);
    vis = vector<int> (n+1,0);
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        grafos[u].push_back(v);
        grafos[v].push_back(u);
    }
    int root = 1;
    ordem.push_back(root);
    vis[root] = 1;
    dfs(root);
    for (int u : ordem){
        cout << u << endl;
    }
}