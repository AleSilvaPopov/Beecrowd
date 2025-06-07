#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;

    while(cin >> N){
        vector<string> lista(N);
        for(int i=0; i<N; i++){
            cin >> lista[i];
        }

        sort(lista.begin(), lista.end());

        long long cont=0;
        for(int i=1; i<N; i++){
            size_t j=0;
            while(j < lista[i].size() && lista[i][j] == lista[i-1][j]) j++;

            cont +=j;
        }
        cout << cont << '\n';
    }

    return 0;
}