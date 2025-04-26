#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string nome; cin >> nome; cin.ignore();
    double salario, vendas; cin >> salario >> vendas;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << salario+((0.15*vendas)) << "\n"; 

    return 0;
}