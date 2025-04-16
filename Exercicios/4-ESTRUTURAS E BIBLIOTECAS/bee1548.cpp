#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int M, nota, mudou=0;
        cin >> M;

        vector<int> notas_alunos(M), temp(M);


        for(int j=0; j<M; j++){
            cin >> notas_alunos[j];
        }
        temp = notas_alunos;
        sort(notas_alunos.rbegin(), notas_alunos.rend());

        for(int j=0; j<M; j++){
            if(notas_alunos[j] == temp[j]){
                mudou++;
            }
        }
        cout << mudou << endl;
    }

    return 0;
}