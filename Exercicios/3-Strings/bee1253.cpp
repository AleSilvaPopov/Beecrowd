#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;

    for(int i=0; i<N; i++){
        string CifraCesar; cin >> CifraCesar;
        int deslocamento; cin >> deslocamento;

        string decifrada;
        for(char c : CifraCesar){
            if(c - deslocamento < 'A'){
                decifrada += 'Z' - (deslocamento - (c - 'A' + 1));
            }
            else{
                decifrada += (c - deslocamento);
            }
        }
        cout << decifrada << "\n";

    }
    return 0;
}