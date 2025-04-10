#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int NC, N;
    cin >> NC;
    vector<vector <int>> matriz(NC);
    for(int i=0; i<NC; i++){
        cin >> N;
        matriz[i].resize(N);

        for(int j=0; j<N; j++){
            cin >> matriz[i][j];
        }

    }
    for(int i=0; i<NC; i++){
        sort(matriz[i].begin(), matriz[i].end());
    }
    for(int i=0; i<NC; i++){
        for(int j=0; j < matriz[i].size(); j++){
            cout << matriz[i][j];
            if(j < matriz[i].size() - 1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}