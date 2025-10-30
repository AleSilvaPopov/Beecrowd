#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N; cin >> N;

    while(N != 0){

        vector<int> suspeitos(N);
        vector<int> temp(N);
        for(int i=0; i<N; i++){
            cin >> suspeitos[i];
            temp[i] = suspeitos[i];

        }
        sort(temp.begin(), temp.end());

        int segundoMaior = temp[N-2];

        int indice;
        for(int i=0; i<N; i++){
            if(suspeitos[i] == segundoMaior) indice = i + 1;
        }

        cout << indice << endl;

        cin >> N;
    }

    return 0;
}