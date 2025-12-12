#include <bits/stdc++.h>
#include <locale.h>
using namespace std;
int main(){
    map<string,vector<string>> nome;
    map<string,int> mortos;


    string n1,n2;
    while (cin >> n1 >> n2 && n1[0] >= 'A' && n1[0] <= 'Z' && n2[0] >= 'A' && n2[0] <= 'Z'){
        mortos[n2] =1;
        if (mortos.find(n1) == mortos.end()){
            nome[n1].push_back(n2);
            if (nome.find(n2) != nome.end()){
                nome.erase(nome.find(n2));
            }
        }
    }
    for (auto it = nome.begin();it != nome.end();it++){
            cout << it->first<< " " << it->second.size() << "\n";
        }
    }
