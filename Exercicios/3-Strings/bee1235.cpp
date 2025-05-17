#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string frase; getline(cin, frase);
        string metade1, metade2, final;

        for(int j=frase.size()/2 - 1; j >= 0; j--){
            metade1 += frase[j];
        }

        for(size_t j=frase.size()-1; j >= frase.size()/2; j--){
            metade2 += frase[j];
        }
        final = metade1 + metade2;

        cout << final << "\n";
    }
    return 0;
}