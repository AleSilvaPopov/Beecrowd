#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while(cin >> N && N != 0){
        vector<char> entrada(N), saida(N);
        for(int i=0; i<N; i++){
            cin >> entrada[i];
        }
        for(int i=0; i<N; i++){
            cin >> saida[i];
        }

        stack<char> vagoes;
        string resultado = "";

        int indice = 0;

        for(int i=0; i<N; i++){
            vagoes.push(entrada[i]);
            resultado += "I";

            while (!vagoes.empty() && vagoes.top() == saida[indice]){
                vagoes.pop();
                resultado += "R";
                indice++;
            }
        }
        cout << resultado;

        if(!vagoes.empty()){
            cout << " Impossible";
        }
        cout << endl;
    }
    return 0;
}