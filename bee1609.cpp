#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int quant_carneiro, cont = 0;
        cin >> quant_carneiro;

        vector<int> carneiros(quant_carneiro);

        for(int j=0; j<quant_carneiro; j++){
            cin >> carneiros[j];
        }

        sort(carneiros.begin(), carneiros.end());
        if(quant_carneiro != 0){
            cont++;
        }
        for(int j=0; j<quant_carneiro; j++){
            if(carneiros[j] != carneiros[j-1] && j != 0){
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}