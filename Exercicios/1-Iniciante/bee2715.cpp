#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;

int main(){
    int N;

    while(cin >> N){
        if(N==0) continue;

        vector<long long> trabalhos(N);
        long long somaTotal=0;

        for(int i=0; i<N; i++){
            cin >> trabalhos[i];
            somaTotal += trabalhos[i];
        }

        long long diferenca = numeric_limits<long long>::max();
        long long somaRangel=0;

        for(int i=0; i<N - 1; i++){
            somaRangel += trabalhos[i];

            long long somaGugu = somaTotal - somaRangel;

            long long diferencaAtual = abs(somaRangel - somaGugu);

            if(diferencaAtual < diferenca) diferenca = diferencaAtual;
        }

        cout << diferenca << endl;

    }
    return 0;
}