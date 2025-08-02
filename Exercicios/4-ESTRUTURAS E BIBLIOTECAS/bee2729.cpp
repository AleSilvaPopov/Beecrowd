#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();

    while(n--){
        string linha; getline(cin, linha);

        set<string> itens;

        stringstream ss(linha);
        string elemento;

        while(ss >> elemento) itens.insert(elemento);

        bool primeiro = true;
        for (const auto& item : itens) {
            if (!primeiro) cout << " ";
            cout << item;
            primeiro = false;
        }
        cout << '\n';
        
    }
    return 0;
}