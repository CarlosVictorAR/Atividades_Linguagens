#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    while (cin >> n >> m){

        vector<vector<int>> v(1000001);
        for (int i = 1; i <= n; i++){
            int a;
            cin >> a;
            v[a].push_back(i);
        }
        for (int i = 1; i <= m; i++){
            int a, b;
            cin >> a >> b;
            if (v[b].size() >= a){
                cout << v[b][a-1] << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        v = vector<vector<int>> (1000001);
    }
    return 0;
}