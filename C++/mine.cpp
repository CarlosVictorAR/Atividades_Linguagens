#include <bits/stdc++.h>
using namespace std;
int main(){
    string tudo;
    int N;
    cin >> N;
    vector <int> contador(N,0);
    stack <bool> start;
    stack <bool> end;
    
    cin.ignore();
    for(int i=0;i<N;i++){
        getline(cin,tudo);
        for (int j = 0;j<tudo.length();j++){
            if (tudo[j] == '<'){
                start.push(true);
            }
            else if (tudo[j] == '>'){
                end.push(true);
            }
        }
        while (start.top() != false && end.top() != false){
            if (start.top() == true && end.top()==true){
                contador[i]++;
            }
            start.pop();
            end.pop();
        }
    }
    for (auto &i : contador){
        cout << contador[i] << "\n";
    }
}