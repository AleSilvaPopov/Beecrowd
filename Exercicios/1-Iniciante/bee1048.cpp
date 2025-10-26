#include <iostream>
#include <iomanip>

using namespace std;

float calcularSalario(float, int);
float aumentoSalario(float, int);

int main(){
    float salario; cin >> salario;

    if(salario <= 400.00){
        cout << fixed << setprecision(2) << "Novo salario: " << calcularSalario(salario, 15) << endl
        << "Reajuste ganho: " << aumentoSalario(salario, 15) << endl
        << "Em percentual: 15 %\n";
    }
    else if(salario <= 800.00){
        cout << fixed << setprecision(2) << "Novo salario: " << calcularSalario(salario, 12) << endl
        << "Reajuste ganho: " << aumentoSalario(salario, 12) << endl
        << "Em percentual: 12 %\n";
    }
    else if(salario <= 1200.00){
        cout << fixed << setprecision(2) << "Novo salario: " << calcularSalario(salario, 10) << endl
        << "Reajuste ganho: " << aumentoSalario(salario, 10) << endl
        << "Em percentual: 10 %\n";
    }
    else if(salario <= 2000.00){
        cout << fixed << setprecision(2) << "Novo salario: " << calcularSalario(salario, 7) << endl
        << "Reajuste ganho: " << aumentoSalario(salario, 7) << endl
        << "Em percentual: 7 %\n";
    }
    else{
        cout << fixed << setprecision(2) << "Novo salario: " << calcularSalario(salario, 4) << endl
        << "Reajuste ganho: " << aumentoSalario(salario, 4) << endl
        << "Em percentual: 4 %\n";
    }

    return 0;
}

float calcularSalario(float s, int p){
    return s+=aumentoSalario(s, p);
}

float aumentoSalario(float s, int p){
    return (s*p/100);
}