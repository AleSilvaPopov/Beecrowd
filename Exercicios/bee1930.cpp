#include <iostream>
using namespace std;

int main(){
    int T1, T2, T3, T4, tomadas;
    cin >> T1 >> T2 >> T3 >> T4;

    tomadas = T1 - 1 + T2 - 1 + T3 - 1 + T4;
    
    cout << tomadas << endl;    

    return 0;
}