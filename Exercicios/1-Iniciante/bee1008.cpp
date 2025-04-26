#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int number, horas; cin >> number >> horas;
    float valor; cin >> valor;

    cout << fixed << setprecision(2) << "NUMBER = " << number << "\nSALARY = U$ " << horas*valor << "\n";

    return 0;
}