#include <iostream>

using namespace std;

int main(){
    int N, M;

    while(cin >> N >> M){
        long long somaN = 1, somaM = 1, somaTotal=0;
        for(int i=N; i>1; i--){
            somaN *= i;
        }
        for(int i=M; i>1; i--){
            somaM *= i;
        }

        somaTotal = somaN + somaM;
        cout << somaTotal << endl;
    }

    return 0;
}