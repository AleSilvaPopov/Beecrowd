#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;

    int cont = N / 3600;
    int resto = N % 3600;
    cout << cont << ":";

    cont = resto / 60;
    resto %= 60;
    cout << cont << ":" << resto << "\n";

    return 0;
}