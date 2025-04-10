#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> matriz(N, vector<int>(M));

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriz[i][j];
        }
    }

    bool ehescada = true;
    int ultimacolunapivo = -1;

    for(int i=0; i<N; i++){
        int colunapivo = -1;
        for(int j=0; j<M; j++){
            if(matriz[i][j] != 0){
                colunapivo = j;
                break;
            }
        }

        if(colunapivo == -1){
            for(int k = i +1; k<N; k++){
                for(int j=0; j<M; j++){
                    if(matriz[k][j] != 0){
                        ehescada = false;
                        break;
                    }
                }
                if(!ehescada)
                    break;
            }
            break;
        } else {
            if (colunapivo <= ultimacolunapivo) {
                ehescada = false;
                break;
            }

            for (int k = i + 1; k < N; k++) {
                for (int j = 0; j <= colunapivo; j++) {
                    if (matriz[k][j] != 0) {
                        ehescada = false;
                        break;
                    }
                }
                if (!ehescada) break;
            }
        }
    }

    if (ehescada) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}