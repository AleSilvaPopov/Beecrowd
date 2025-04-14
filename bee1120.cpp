#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char D;
    string N;

    while(cin >> D >> N && (D != '0'&& N != "0")){
        string fin;
        fin.reserve(N.size());
        for(char c : N){
            if(c != D ){
                fin.push_back(c);
            }
       }

        if(fin.empty()){
            cout << "0\n";
            continue;
        }
        size_t inicio = 0;
        while(inicio < fin.size() && fin[inicio] == '0'){
            inicio++;
        }

        if(inicio == fin.size()){
            cout << "0\n";
        }
        else{
            cout << fin.substr(inicio) << "\n";
        }   
    }
    return 0;
}