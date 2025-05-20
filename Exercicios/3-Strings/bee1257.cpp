#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        int L; cin >> L;

        int cont=0;
        for(int j=0; j<L; j++){
            string s; cin >> s;

            for (size_t h = 0; h < s.size(); h++) {
                char c = s[h];
                int posAlfa = c - 'A';
                cont += posAlfa + j + h; 
            }
        }
        cout << cont << "\n";
    }
    return 0;
}