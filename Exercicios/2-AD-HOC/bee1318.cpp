#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    while(cin >> N >> M && N != 0 && M != 0){
        vector<int> bilhetes(M);

        for(int i=0; i<M; i++){
            cin >> bilhetes[i];
        }

        sort(bilhetes.begin(), bilhetes.end());

        int contClones=0;
        for(int i=0; i<M; i++){
            if(bilhetes[i] == bilhetes[i+1] && bilhetes[i] != bilhetes[i-1]){
                contClones++;
            }
        }

        cout << contClones << "\n";
    }

    return 0;
}