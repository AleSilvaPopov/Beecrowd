#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int horas, Vm; cin >> horas >> Vm;
    float KM = Vm * horas;
    float L = KM/12;

    cout << fixed << setprecision(3) << L << "\n";

    return 0;
}