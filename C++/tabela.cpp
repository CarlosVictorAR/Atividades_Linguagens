#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout << "informe a quantidade de variaveis:" << endl;
    cin >> n;
    vector<vector<bool>>variaveis(n);
    int contador = pow(2,n);
    for (int i = 0; i < n; i++){
        contador /= 2;
        int troca = -1;
        for (int j = 0; j < pow(2,n); j++){
            if (j%contador == 0){
                troca *= -1;
            }
            if (troca == 1){
                variaveis[i].push_back(true);
            }
            else {
                variaveis[i].push_back(false);
            }
        }
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < pow(2,n); j++){
            cout << i+1 << ":";
            if (variaveis[i][j]){
                cout << "V" << endl;
            }
            else {
                cout << "F" << endl;
            }
        }
    }
}