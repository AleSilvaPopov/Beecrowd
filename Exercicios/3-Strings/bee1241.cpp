#include <iostream>
#include <string>

using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        string s1, s2; cin >> s1 >> s2;

        if(s2.size() > s1.size()) {
            cout << "nao encaixa\n";
            continue;
        }

        bool encaixa=true;
        size_t tam = s1.size() - s2.size();

        for(size_t j=0; j<s2.size(); j++){
            if(s1[tam + j] != s2[j]) {
                encaixa = false;
                break;  
        }
        }

        if(encaixa) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
    return 0;
}