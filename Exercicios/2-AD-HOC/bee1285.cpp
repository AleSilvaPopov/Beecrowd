#include <iostream>
#include <vector>

using namespace std;

bool possuiRepetidos(int);

int main(){
    int N, M;

    while(cin >> N >> M){
        int contCasa=0;
        for(int i=N; i<=M; i++){
            if(!possuiRepetidos(i)){
                contCasa++;
            }
        }
        cout << contCasa << endl;
    }
    return 0;
}

bool possuiRepetidos(int n){
    vector<bool> visto(10, false);

    while (n > 0){
        int digito = n % 10;

        if(visto[digito]){
            return true;
        }

        visto[digito] = true;
        n /= 10;
    }
    return false;
}