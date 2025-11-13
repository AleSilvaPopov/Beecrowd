#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

typedef struct{
    float valor;
    string frutas;
}compras;

int main(){
    int n; 
    cin >> n;

    float contValor=0;
    vector<compras> dona(n);
    for(int i=0; i<n; i++){
        cin >> dona[i].valor;
        cin.ignore();
        getline(cin, dona[i].frutas);

        contValor += dona[i].valor;
    }

    float totalKG=0;
    for(int i=0; i<n; i++){
        int cont=0;
        stringstream ss(dona[i].frutas);
        string temp;

        while(ss >> temp) cont++;

        totalKG += cont;

        cout << "day " << i + 1 << ": " << cont << " kg\n";
    }
    cout << fixed << setprecision(2) << totalKG/n << " kg by day\n"
         << "R$ " << contValor/n << " by day\n";

    return 0;
}