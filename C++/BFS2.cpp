#include <bits/stdc++.h>
using namespace std;
typedef struct{
    int valor;
    int pos;
}BFS;
int main(){
    int T,L,O,D;
    cin >> T >> L >> O >> D;
    vector<vector<BFS>> linhas(T+1);
    queue<BFS> fila;
    vector<bool> vis(T+1,false);
    for (int i = 1; i <= L; i++){
        int j;
        cin >> j;
        vector<BFS> place;
        place = vector<BFS> ();
        for (int o = 1; o <= j; o++){
            BFS n;
                cin >> n.valor;
                place.push_back(n);
        }
        for(BFS z : place){
            for (BFS o : place){
                linhas[z.valor].push_back(o);
                linhas[o.valor].push_back(z);
            }
        }
    }
    BFS B;
    B.valor = O;
    fila.emplace(B);
    vis[B.valor] = true;
    fila.front().pos=0;
    int contador=0;
    while(fila.size() != 0){
        if (fila.front().valor == D)break;
        int first = fila.front().valor;
        for (BFS i : linhas[first]){
            if (!vis[i.valor]){
                i.pos = fila.front().pos+1;
                fila.push(i);
                vis[i.valor] = true;
            }
        }
        fila.pop();
    }
    cout << fila.front().pos;


}