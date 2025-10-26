#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> num(5);

    int contPares=0, contImpar=0, contPos=0, contNeg=0;
    for(int i=0; i<5; i++){
        cin >> num[i];
        
        if(num[i]%2 == 0) contPares++;

        else contImpar++;

        if(num[i] > 0) contPos++;

        else if(num[i] < 0) contNeg++;
    }

    cout << contPares << " valor(es) par(es)\n" 
    << contImpar << " valor(es) impar(es)\n" 
    << contPos << " valor(es) positivo(s)\n" 
    << contNeg << " valor(es) negativo(s)\n"; 

    return 0;
}