#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string NaoDancante;

    while(getline(cin, NaoDancante)){
        int contador=0;

        for(size_t i=0; i<NaoDancante.size(); i++){
            if(NaoDancante[i] != ' '){
                if(contador % 2 == 0){
                    NaoDancante[i] = toupper(NaoDancante[i]);
                }
                else{
                    NaoDancante[i] = tolower(NaoDancante[i]);
                }
                contador++;
            }
        }
        cout << NaoDancante << "\n";
    }

    return 0;
}