#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C; cin >> A >> B >> C;
    const double pi = 3.14159;

    cout << fixed << setprecision(3)
         << "TRIANGULO: " << A*C/2 << "\n"
         << "CIRCULO: "   << pi*(C*C) << "\n"
         << "TRAPEZIO: "  << ((A + B) * C)/2 << "\n"
         << "QUADRADO: "  << B*B << "\n" 
         << "RETANGULO: " << A*B  << "\n";

    return 0;
}