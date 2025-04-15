#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

typedef struct{
    int X, Y, Z;
    bool mult, soma, subt, impo;
}expressao;

int main(){
    int T;

    while(cin >> T){
        cin.ignore();
        
        vector<expressao> expressoes(T);
        for(int i=0; i<T; i++){
            char igual;
            cin >> expressoes[i].X >> expressoes[i].Y >> igual >> expressoes[i].Z;

            expressoes[i].soma = (expressoes[i].X + expressoes[i].Y == expressoes[i].Z);
            expressoes[i].subt = (expressoes[i].X - expressoes[i].Y == expressoes[i].Z);
            expressoes[i].mult = (expressoes[i].X * expressoes[i].Y == expressoes[i].Z);

            expressoes[i].impo = !(expressoes[i].soma || expressoes[i].subt || expressoes[i].mult);
        }

        set<string> reprovados;

        for(int i=0; i<T; i++){
            string nome, resposta;
            int indice;
            cin >> nome >> indice >> resposta;
            indice--;
            
            bool acertou = false;
            if(resposta == "+"){
                acertou = expressoes[indice].soma;
            } else if(resposta == "-"){
                acertou = expressoes[indice].subt;
            }else if(resposta == "*"){
                acertou = expressoes[indice].mult;
            }else if(resposta == "I"){
                acertou = expressoes[indice].impo;
            }
            if(!acertou){
                reprovados.insert(nome);
            }
        }

        if(reprovados.empty()){
            cout << "You Shall All Pass!\n";
        }else if(reprovados.size() == T){
            cout << "None Shall Pass!\n";
        }else{
            auto it = reprovados.begin();
            cout << *it; 
            
            for (++it; it != reprovados.end(); ++it) {
                cout << " " << *it;
            }
            cout << "\n";
        }
    }
    return 0;
}
