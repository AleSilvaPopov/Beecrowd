#include <iostream>

using namespace std;

int main(){
    int X;

    while(cin >> X && X != 0){
        for(int i=1; i<=X; i++){
            cout << i;
            if(i != X){
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}