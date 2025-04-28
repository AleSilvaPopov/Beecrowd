#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;

    while(cin >> N && N != 0){
        vector<int> Hs(N);
        for(int i=0; i<N; i++){
            cin >> Hs[i];
        }

        int picos=0;
        for(int i=0; i<N; i++){
            if((Hs[i] > Hs[(i - 1 + N) % N] && Hs[i] > Hs[(i + 1) % N]) || (Hs[i] < Hs[(i - 1 + N) % N] && Hs[i] < Hs[(i+1) % N]))
                picos++;
        }

        cout << picos << "\n";
    }
    return 0;
}