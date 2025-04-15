#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


int main(){
    int C;

    cin >> C;

    for(int i = 0; i<C; i++){
        int N, soma = 0, acima_media = 0;
        cin >> N;
        vector<int> notas(N);

        for(int j=0; j<N; j++){
            cin >> notas[j];
            soma += notas[j];
        }
        double media = static_cast<double>(soma) / N;
        for(int j=0; j<N; j++){
            if(notas[j] > media){
                acima_media++;
            }
        }
        double porcento = (static_cast<double>(acima_media)/N)*100;
        cout << fixed << setprecision(3) << porcento << "%" << endl;
    }

    return 0;
}