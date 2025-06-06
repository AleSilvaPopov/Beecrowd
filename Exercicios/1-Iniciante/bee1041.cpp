#include <iostream>
using namespace std;

int main(){
    double ponto1, ponto2; cin >> ponto1 >> ponto2;
    
    if(ponto1 == 0.0 || ponto2 == 0.0){
        if(ponto1 == 0.0 && ponto2 != 0.0) cout << "Eixo Y\n";

        else if(ponto2 == 0.0 && ponto1 != 0.0) cout << "Eixo X\n";

        else cout << "Origem\n";
    }
    else if(ponto1 >= 0.0){

        if(ponto2 > 0 ) cout << "Q1\n";

        else cout << "Q4\n";
    }
    else{

        if(ponto2 > 0 ) cout << "Q2\n";

        else cout << "Q3\n";
    }

    return 0;
}