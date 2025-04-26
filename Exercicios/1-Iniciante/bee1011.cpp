#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double raio; cin >> raio;
    const double pi = 3.14159;

    cout << fixed << setprecision(3) << "VOLUME = " << ((4.0/3)*pi*(raio*raio*raio)) << "\n";

    return 0;
}