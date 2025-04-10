#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    double frac = 0.0;
    cin >> N;

    for(int i = 0; i < N; i++){
        frac =1.0 / (2 + frac);
    }
    cout << fixed << setprecision(10) << frac + 1<< endl;

    return 0;
}