#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string adiciona_virgula(long long dolar);
string cents(int cent);

int main(){
    long long dolar;
    int centavos; 

    while(cin >> dolar >> centavos){
        string formatada = "$" + adiciona_virgula(dolar) + "." + cents(centavos);
        cout << formatada << "\n";
    }

    return 0;
}

string adiciona_virgula(long long dolar){
        if(dolar == 0) return "0";

        string s = to_string(dolar);
        string retorno;
        int cont=0;
        
        for(int i=s.length() - 1; i>=0; i--){
            retorno += s[i];
            cont++;
            if(cont % 3 == 0 && i != 0){
                retorno += ",";
            }
        }
        reverse(retorno.begin(), retorno.end());
        return retorno;
}

string cents(int cent){
    if(cent < 10){
        return "0" + to_string(cent);
    }
    return to_string(cent);
}
