#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct{
    int x, y;
    int consumo;
}xy;

int main(){
    int N, contCidade=0;

    while(cin >> N && N!=0){
        contCidade++;
        if (contCidade > 1) cout << '\n'; 

        vector<xy> imoveis(N);
        long long contConsumo=0, contPessoa=0;

        for(int i=0; i<N; i++){
            cin >> imoveis[i].x >> imoveis[i].y;

            imoveis[i].consumo = imoveis[i].y/imoveis[i].x;
            contPessoa+=imoveis[i].x;
            contConsumo+=imoveis[i].y;
        }

        sort(imoveis.begin(), imoveis.end(), [](const xy& a, const xy& b) {
            if (a.consumo == b.consumo) {
                return a.x < b.x;
            }
            return a.consumo < b.consumo;
        });

        vector<pair<int, int>> grupos;
        for (int i = 0; i < N; i++) {
            if (i > 0 && imoveis[i].consumo== imoveis[i-1].consumo) {
                grupos.back().first += imoveis[i].x;
            } else {
                grupos.push_back({imoveis[i].x, imoveis[i].consumo});
            }
        }

        cout << "Cidade# " << contCidade << ":\n";
        for (size_t i = 0; i < grupos.size(); i++) {
            if (i > 0) cout << " ";
            cout << grupos[i].first << "-" << grupos[i].second;
        }
        cout << "\n";
        double consumo_medio = (double)contConsumo / contPessoa;
        consumo_medio = floor(consumo_medio * 100) / 100.0;
        
        cout << "Consumo medio: " << fixed << setprecision(2) 
             << consumo_medio << " m3.\n";
        
    }   
    return 0;
}