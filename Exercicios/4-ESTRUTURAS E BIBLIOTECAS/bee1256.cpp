#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N; cin >> N;

    while(N--){
        int M, C; cin >> M >> C;

        vector<vector<int>> hash(M);

        for(int i=0; i<C; i++){
            int chave; cin >> chave;

            int lugar = chave % M;
            hash[lugar].push_back(chave);
        }
        for(int i=0; i<M; i++){
            cout << i << " -> ";
            for(int chave : hash[i]){
                cout << chave << " -> ";
            }
            cout << "\\\n";
        }
        if(N != 0) cout << '\n';
    }


    return 0;
}