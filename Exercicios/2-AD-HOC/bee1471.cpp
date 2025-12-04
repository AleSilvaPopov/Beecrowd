#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, r;

    while (cin >> n && cin >> r){
        vector<bool> voltou(n + 1, false);

        for(int i=0; i<r; i++){
            int indice;
            cin >> indice;
            voltou[indice] = true;
        }

        bool todosVoltaram = true;

        for(int i=1; i<=n; i++){
            if(voltou[i] == false){
                cout << i << ' ';
                todosVoltaram = false;
            }
        }

        if(todosVoltaram){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}