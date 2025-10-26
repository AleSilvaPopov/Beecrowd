#include <iostream>
using namespace std;

int main(){
    int x; cin >> x;

    int cont=0;
    for(int i=x; 6 != cont; i++){
        if(i % 2 == 1){
            cout << i << endl;
            cont++;
        }
    }
    return 0;
}