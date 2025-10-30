#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> cartas(5);

    for(int i=0; i<5; i++){
        cin >> cartas[i];
    }

    bool cres = true, decre = true;
    for(int i=1; i<5; i++){
        if(cartas[i] <= cartas[i-1]){
            cres = false;
        }
        if(cartas[i] >= cartas[i-1]){
            decre = false;
        }
    }

    if(cres){
        cout << "C\n";
    }
    else if(decre){
        cout << "D\n";
    }
    else{
        cout << "N\n";
    }
    return 0;
}