#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num(5);

    int cont=0;
    for(int i=0; i<5; i++){
        cin >> num[i];
        if(num[i]%2 == 0){
            cont++;
        }
    }
    cout << cont << " valores pares\n";
    
    return 0;
}