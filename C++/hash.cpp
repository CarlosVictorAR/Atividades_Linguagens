#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int m, c;
        cin >> m >> c;
        vector<vector<int>> hash(m);
        for (int j = 0; j < c; j++){
            int t;
            cin >> t;
            hash[t%m].push_back(t);
        }
        for (int k = 0; k < m; k++){
            cout << k << " -> ";
            for (int u : hash[k]){
                cout << u << " -> ";
            }
            cout << "\\" << endl;
        }
        if (i >= 0 && i < n-1){
            cout << endl;
        }
    }
}
