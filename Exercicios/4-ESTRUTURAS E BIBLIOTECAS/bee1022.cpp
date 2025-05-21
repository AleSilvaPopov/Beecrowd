#include <iostream>
using namespace std;

int divisorComum(int, int);

int main(){
    int N; cin >> N;

    while(N--){
        int N1, D1, N2, D2;
        char c, ope;
        cin >> N1 >> c >> D1 >> ope >> N2 >> c >> D2; 

        int NFi, DFi;

        if(ope == '+'){
            NFi = (N1*D2) + (N2*D1);
            DFi = D1 * D2;
        }
        else if(ope == '-'){
            NFi = (N1*D2) - (N2*D1);
            DFi = D1 * D2;
        }
        else if(ope == '*'){
            NFi = N1 * N2;
            DFi = D2 * D1;
        }
        else{
            NFi = N1 * D2;
            DFi = N2 * D1;
        }

        if(DFi < 0){
            NFi *= -1;
            DFi *= -1;
        }

        cout << NFi << '/' << DFi << " = ";

        int divisor = divisorComum(abs(NFi),abs(DFi));
        if(divisor > 1){
            NFi /= divisor;
            DFi /= divisor;
        }
        cout << NFi << '/' << DFi << '\n';
    }
    return 0;
}

int divisorComum(int a, int b){
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}