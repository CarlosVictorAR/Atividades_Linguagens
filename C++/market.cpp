#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M,P;
    cin >> N;
    string fruta;
    float preco;
    int qtnd;
    unordered_map<string,float> valor;
    unordered_map<string,int> quantidade;
    vector<pair<int,float>> reais;
    for (int i = 0; i<N; i++){
        cin >> M;
        for (int j = 0;j < M; j++){
            cin >> fruta >> preco;
            valor[fruta] = preco;
        }
        cin >> P;
        if (P >= 1 && P <= M){
            for (int j=0;j<P;j++){
                cin >> fruta >>qtnd;
                quantidade[fruta] = qtnd;
            }
            float rstotal = 0;
            for (auto j=quantidade.begin();j != quantidade.end(); j++){
                float rs = valor[j->first] * quantidade [j->first];
                rstotal += rs;
            }
            reais.push_back({i,rstotal});
            valor.clear();
            quantidade.clear();
        }
    }
    for (auto &i : reais){
        cout << fixed << setprecision(2);
        cout << "R$ " << i.second << "\n";
    }
}