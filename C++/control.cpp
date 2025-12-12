#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int valor;
    int camada;
} Nivel;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int o,d,k;
    vector <bool> vis(100001,true);
    do{
        queue <Nivel> q;
        cin >> o >> d >> k;
        if (o == 0 && d == 0 && k == 0) break;
        for (int i=0; i < k; i++){
            int n;
            cin >> n;
            vis[n] = false;
        }
        Nivel a;
        a.camada = 0;
        a.valor = o;
        q.emplace(a);
        Nivel n;
        while (q.size() != 0){
            Nivel nivel = q.front();
            if (nivel.valor != d){
                vis[nivel.valor] = false;
                n.camada = nivel.camada + 1;
                if (nivel.valor * 2 <= 100000){
                    if (vis[nivel.valor * 2]){
                        vis[nivel.valor * 2] = false;
                        n.valor = nivel.valor * 2;
                        q.push(n);
                        if (n.valor == d)break;
                    }
                }
                if (nivel.valor * 3 <= 100000){
                   if (vis[nivel.valor * 3]){
                        vis[nivel.valor * 3] = false;
                        n.valor = nivel.valor * 3;
                        q.push(n);
                        if (n.valor == d)break;
                    }
                }
                if (nivel.valor / 2 <= 100000 && nivel.valor % 2 == 0){
                    if (vis[nivel.valor / 2]){
                        vis[nivel.valor / 2] = false;
                        n.valor = nivel.valor / 2;
                        q.push(n);
                        if (n.valor == d)break;
                    }
                }
                if (nivel.valor - 1  > 0){
                    if (vis[nivel.valor - 1]){
                        vis[nivel.valor - 1] = false;
                        n.valor = nivel.valor - 1;
                        q.push(n);
                        if (n.valor == d)break;
                    }
                }
                if (nivel.valor + 1 <= 100000){
                    if (vis[nivel.valor + 1]){
                        vis[nivel.valor + 1] = false;
                        n.valor = nivel.valor + 1;
                        q.push(n);
                        if (n.valor == d)break;
                    }
                }
                q.pop();
            }
            else {
                n.camada = nivel.camada;
                break;
            }
        }
        if (q.size() == 0){
            cout << -1 << endl;
        }
        else{
            cout << n.camada << endl;
        }
        q = queue <Nivel> ();
        vis.assign(100001, true);
    } while (o > 0 || d != 0 || k != 0);

}