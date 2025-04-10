#include <iostream>

using namespace std;

int main(){
    int x, j = 0;

    cin >> x;

    for(int i = 0; i<1000; i++){
        if(x > j){
            cout << "N[" << i << "] = " << j << endl;
        }else{
            i--;
            j=-1;
        }
        j++;
        
    }
    return 0;
}