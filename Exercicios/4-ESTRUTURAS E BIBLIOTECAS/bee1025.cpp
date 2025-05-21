#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, Q, contCase=0;

    while(cin >> N >> Q && N != 0 && Q != 0){
        contCase++;

        vector<int> marmores(N);

        for(int i=0; i<N; i++){
            cin >> marmores[i];
        }

        sort(marmores.begin(), marmores.end());

        vector<int> chance(Q);

        for(int i=0; i<Q; i++){
            cin >> chance[i];
        }

        cout << "CASE# " << contCase << ":\n";

        int pos; 

        for(int i=0; i<Q; i++){
            bool flag = false;

            for(int j=0; j<N; j++){
                if(chance[i] == marmores[j] && !flag){
                    flag=true;
                    pos = j + 1;
                }
            }

            if(flag){
                cout << chance[i] << " found at " << pos << "\n";
            }
            else{
                cout << chance[i] << " not found\n";
            }
        }
    }

    return 0;
}