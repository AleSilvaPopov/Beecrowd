#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int X; cin >> X;

    vector<int> numeros(X);
    for(int i=0; i<X; i++){
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    int cont=1;
    for(int i=0; i<X; i++){
        if(numeros[i + 1] == numeros[i]){
            cont++;
        }
        else{
            cout << numeros[i] << " aparece " << cont << " vez(es)\n";
            cont=1;
        }
    }

    return 0;
}