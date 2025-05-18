#include <iostream>
#include <string>
using namespace std;

int main(){

    int N, M; 
    while(cin >> N >> M && N != 0 && M != 0){
        int resultado = N + M;
        string temp = to_string(resultado), final;

        for(char c : temp){
            if(c != '0'){
                final += c;
            }
        }

        cout << final << "\n";
        
    }

    return 0;
}