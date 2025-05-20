#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;

    map<string, int> contagem;
    for(int i=0; i<N; i++){
        string temp; cin >> temp;

        contagem[temp]++;
    }

    size_t quant = 151 - contagem.size();

    cout << "Falta(m) " << quant << " pomekon(s).\n";
    
    return 0;
}