#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x, parcont, imparcont;
    cin >> x;
    vector<unsigned int> N(x), par, impar;

    for(int i = 0; i < x; i++){
        cin >> N[i];
    }

    for(int i = 0; i < x; i++){
        if(N[i] % 2 == 0){
            par.push_back(N[i]);
        }
        else{
            impar.push_back(N[i]);
        }
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    parcont = par.size();
    imparcont = impar.size();

    for(int i = 0; i < parcont; i++){
        cout << par[i] << endl;
    }
    for(int i = 0; i < imparcont; i++){
        cout << impar[i] << endl;
    }
    
    return 0;
}