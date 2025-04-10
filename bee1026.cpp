#include <iostream>
using namespace std;

int main(){
    unsigned int A, B, resultado;

    while(cin >> A >> B){
        resultado = A ^ B;
        cout << resultado << endl;
    }

    return 0;
}