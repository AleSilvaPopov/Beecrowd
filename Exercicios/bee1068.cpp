#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;

    while(getline(cin, num)){
        int cont=0;
        bool erro = false;
        for(char c : num){
            if(c == '('){
                cont++;
            }
            else if( c == ')'){
                cont--;
                if(cont < 0){
                    erro = true;
                    break;
                }
            }
        }

        if(!erro && cont == 0){
            cout << "correct\n";
        }
        else{
            cout << "incorrect\n";
        }
    }   

    return 0;
}