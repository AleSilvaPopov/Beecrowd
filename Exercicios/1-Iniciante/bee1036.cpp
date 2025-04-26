#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C; cin >> A >> B >> C;

    double delta = pow(B, 2) - 4 * A * C;

    if(delta < 0 || A == 0){
        cout << "Impossivel calcular\n";
        return 0;
    }

    double x1 = (-B + sqrt(delta)) /(2 * A);
    double x2 = (-B - sqrt(delta)) /(2 * A);

    cout << fixed << setprecision(5) 
         << "R1 = " << x1 << "\n"
         << "R2 = " << x2 << "\n";
    return 0;
}