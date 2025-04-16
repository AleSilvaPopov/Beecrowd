#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r; cin >> r;
    const double n = 3.14159;

    cout << fixed << setprecision(4) << "A=" << n*(r*r) << "\n";

    return 0;
}