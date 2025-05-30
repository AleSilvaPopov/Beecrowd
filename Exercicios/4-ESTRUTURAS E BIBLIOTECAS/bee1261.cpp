#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N; cin >> M >> N;

    unordered_map<string, long long> HayPoint;

    while(M--){
        string cargo; cin >> cargo;
        int salario; cin >> salario;

        HayPoint[cargo] = salario;
    }

    cin.ignore();

    while (N--)
    {   
        long long total = 0;
        string linha, palavra;
        while(getline(cin, linha)){

            if(linha == ".") break;

            istringstream iss(linha);
            while(iss >> palavra){
                if(HayPoint.find(palavra) != HayPoint.end()) total += HayPoint[palavra];
            }
        }
        cout << total << '\n';
    }
    return 0;
}