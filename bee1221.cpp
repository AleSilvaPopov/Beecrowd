#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int X, flag = 0;
        cin >> X;
        
        for(int j=2; j<=sqrt(X); j++){
            if(X % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "Not Prime" << endl;
        }else{
            cout << "Prime" << endl;
        }

    }

    return 0;
}