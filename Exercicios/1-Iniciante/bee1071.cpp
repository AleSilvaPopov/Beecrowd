#include <iostream>

using namespace std;

int main(){
    int x, y; cin >> x >> y;

    int maior, menor;
    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }

    int soma=0;
    for(int i=menor+1; i<maior; i++){
        if(i%2 != 0){
            soma += i;
        }
    }
    cout << soma << endl;

    return 0;
}