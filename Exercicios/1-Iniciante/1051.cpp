#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float salario;
    cin >> salario;
    float imposto = 0.0;
   
    if(salario > 2000 && salario <= 3000){
        salario -= 2000;
        imposto = salario*8/100;
    }
    else if(salario > 3000 && salario <= 4500){
        salario -= 3000;
        imposto = 1000*8/100;
        imposto += salario*18/100;
    }
    else if(salario > 4500){
        salario -= 4500;
        imposto = 1000*8/100;
        imposto += 1500*18/100;
        imposto += salario*28/100;
    }

    if(imposto == 0.0){
        cout << "Isento\n";
    }
    else{
        cout << fixed << setprecision(2) << "R$ " << imposto << endl;
    }

    return 0;
}

