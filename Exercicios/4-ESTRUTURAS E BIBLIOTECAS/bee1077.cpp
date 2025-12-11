#include <iostream>
#include <string>
#include <stack>
using namespace std;

int prioridade(char);

int main(){
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        string infixa, posfixa = "";
        cin >> infixa;

        stack<char> operadores;

        for(char c : infixa){
            if(isalnum(c)){
                posfixa += c;
            }
            else if(c == '('){
                operadores.push(c);
            }
            else if(c == ')'){
                while (!operadores.empty() && operadores.top() != '('){
                    posfixa += operadores.top();
                    operadores.pop();
                }
                if(!operadores.empty()){
                    operadores.pop();
                }
            }
            else{
                while (!operadores.empty() && prioridade(c) <= prioridade(operadores.top())){
                    posfixa += operadores.top();
                    operadores.pop();
                }
                operadores.push(c);       
            }
        }
        while (!operadores.empty()){
            posfixa += operadores.top();
            operadores.pop();
        }

        cout << posfixa << endl;
        
    }

    return 0;
}

int prioridade(char op){
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}