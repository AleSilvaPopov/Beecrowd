#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool saoiguais(vector<char>&);

int main(){
    string txt;

    while(getline(cin, txt) && txt != "*"){
            vector<string> palavras;
            string temp;

            for(char c : txt){
                if(c != ' ') temp += c;

                else if(!temp.empty()){
                    palavras.push_back(temp);
                    temp.clear();
                }
            }
            if (!temp.empty()) palavras.push_back(temp);

            vector<char> PriLetra;
            for(const string& palavra : palavras){
                PriLetra.push_back(palavra[0]);
            }

            if(saoiguais(PriLetra)) cout << "Y\n";

            else cout << "N\n";

    }

    return 0;
}

bool saoiguais(vector<char> &s){
    if(s.empty()) return false;

    char primeira = tolower(s[0]);

    for(char c : s){
        if(tolower(c) != primeira) return false;
    }
    return true;
}