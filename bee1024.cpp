#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string M; getline(cin, M);
        int cont=0;

        for(char c : M){
            if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
                M[cont] += 3;
            }
            cont++;
        }
        
        reverse(M.begin(), M.end());

        for(size_t i = M.size()/2; i <= M.size(); i++){
            M[i] -= 1;
            
        }
        cout << M << "\n";
    }
    return 0;
}