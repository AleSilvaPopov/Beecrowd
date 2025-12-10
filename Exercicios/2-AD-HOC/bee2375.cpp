#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    int A, L, P;
    cin >> N;
    cin >> A >> L >> P;

    if(N <= A && N <= L && N <= P)
        cout << "S\n";
    else
        cout << "N\n";


    return 0;
}