#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string espr;
    while(getline(cin, espr)){
        stack<char> pilha;
        bool erro = false;

        for(char c : espr){
            if(c == '('){
                pilha.push(c);
            }
            else if(c == ')'){
                if(!pilha.empty()){
                    pilha.pop();
                }
                else{
                    erro = true;
                    break;
                }
            
            }
        }

        if(pilha.empty() && !erro){
            cout << "correct\n";
        }
        else{
            cout << "incorrect\n";
        }

    }
    return 0;
}