#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;
    for(int i=0; i<N; i++){
        int k; cin >> k;

        for(int j=0;j<k; j++){
            int caso; cin >> caso;

            if(caso == 1) cout << "Rolien\n";

            else if(caso == 2) cout << "Naej\n";

            else if(caso == 3) cout << "Elehcim\n";

            else cout << "Odranoel\n";
        }
    }
    return 0;
}