#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grafos;
vector <bool> vis;
int contador = 0;
void dfs(int i){
    vis[i] = true;
    for (int j : grafos[i]){
        if(!vis[j]){
            dfs(j);
        }
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    grafos = vector<vector<int>>(n+1);
    vis = vector<bool> (n+1,false);
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        grafos[u].push_back(v);
        grafos[v].push_back(u);
    }
    vis[0] = true;
    for (int i = 1 ; i <= n; i++){
        if (!vis[i]){
                dfs(i);
                contador++;
            }


    }
    cout << contador;
    
}