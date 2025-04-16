#include <iostream>
#include <string>
using namespace std;

bool bissexto(const string &ano);
bool Huluculu(const string &ano);
bool Bulukulu(const string &ano);
bool ehDivisivel(const string &num, int divisor);

int main(){
    string ano;
    bool teste1=true;

    while(cin >> ano){

        if(!teste1){
            cout << "\n";
        }
        teste1 = false;

        bool temPrioridade=false;
        
        if(bissexto(ano)){
            cout << "This is leap year.\n";
            temPrioridade = true;
        }

        if(Huluculu(ano)){
            cout << "This is huluculu festival year.\n";
            temPrioridade=true;
        }

        if(Bulukulu(ano)){
            cout << "This is bulukulu festival year.\n";
            temPrioridade=true;
        }

        if(!temPrioridade){
            cout << "This is an ordinary year.\n";
        }
    }

    return 0;
}

bool bissexto(const string &ano){
    return (ehDivisivel(ano, 4) && (!ehDivisivel(ano, 100) || ehDivisivel(ano, 400)));
}

bool Huluculu(const string &ano){
    return ehDivisivel(ano, 15);
}

bool Bulukulu(const string &ano){
    return (ehDivisivel(ano, 55) && bissexto(ano));
}

bool ehDivisivel(const string &num, int divisor) {
    int resto = 0;
    for (char digito : num) {
        resto = (resto * 10 + (digito - '0')) % divisor;
    }
    return (resto == 0);
}