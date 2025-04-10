#include <iostream>

using namespace std;

int main(){
    long long A, B, soma=0;
    cin >> A >> B;

    for(int i=A; i<=B; i++){
        soma += i;
    }
    cout << soma << "\n";

    return 0;
}