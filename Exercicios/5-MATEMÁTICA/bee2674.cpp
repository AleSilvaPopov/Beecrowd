#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ehPrimo(int N);

int main(){
    int X;
    while(cin >> X){
        int flag = ehPrimo(X);
        
        if(flag == 0){
            string str_X = to_string(X);
            int digito;
            bool todosPrimos = true;

            for(char c : str_X){
                digito = c - '0';
                if(ehPrimo(digito) != 0){
                    todosPrimos = false;
                    break;
                }
            }
            if(todosPrimos){
                cout << "Super" << endl;
            }
            else{
                cout << "Primo" << endl;
            }
        }
        else{
            cout << "Nada" << endl;
        }
    }

    return 0;
}

int ehPrimo(int N){
    if(N <= 1){ //Não é primo
        return 1;
    }
    for(int i=2;i * i <=N; i++){
        if(N % i == 0){
            return 1; 
        }
    }
    return 0;
}