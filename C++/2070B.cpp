#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    
    cin >> t;
    for (int rep = 0; rep < t; rep++){
        bool parar = false;
        long long n,x,k,contZero=0;
        cin >> n >> x >> k;
        vector<char>command(n);
        for (int i = 0; i < n; i++){
            char s;
            cin >> s;
            command[i] = s;
        }
        int contX = 0;
        while (x != 0){
            if (contX == n)break;
                if (command[contX] == 'L'){
                    x--;
                }
                else{
                    x++;
                }
                contX++;
        }
        if (contX == n && x != 0){//se n achar o primeiro zero para e printa 0
            cout << 0 << endl;
            parar = true;
        }
        else { //achou o primeiro
            k -= contX;
            contZero++;
        }
       long long cont = 0,pos = 0;
       bool forcar = false;
       for (long long i = 0; i < command.size() * k && !parar; i++){//descobre quanto demora para fazer o loop
        cont++;
        if (command[i%(command.size())] == 'L'){
            pos--;
        }
        else{
            pos++;
        }
        if (pos == 0){
            break;
        }
        if (i == k-1 && pos != 0){
            forcar = true;
            break;
        }
       }
       if (!parar && forcar){
            cout << contZero << endl;
       }
       else if (!parar){
            if (cont == 0){
                cout << contZero << endl;
            }
            else {
                contZero += k / cont;
                cout << contZero << endl;
            }

       }
        
        
        
    }


}