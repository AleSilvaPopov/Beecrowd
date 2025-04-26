#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int X; cin >> X;
    float Y; cin >> Y;

    cout << fixed << setprecision(3) << X/Y << " km/l\n"; 

    return 0;
}