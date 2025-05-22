#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    int N; cin >> N;

     cin.ignore();

    while(N--){
        string linha; getline(cin, linha);

        istringstream iss(linha);
        vector<string> palavras;
        string palavra;

        while(iss >> palavra) palavras.push_back(palavra);

        stable_sort(palavras.begin(), palavras.end(), [](const string& a, const string& b) {
            return a.size() > b.size();
        });


          for (size_t i = 0; i < palavras.size(); i++) {
                cout << palavras[i];
                if (i < palavras.size() - 1) cout << ' ';
            }
        cout << '\n';
    }

    return 0;
}