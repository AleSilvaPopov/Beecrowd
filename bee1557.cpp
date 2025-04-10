#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int X;
    while(cin >> X && X != 0){

        int max_num = pow(2, 2 * (X - 1));
        int T = to_string(max_num).length();

       for(int i=0; i<X; i++){
        for(int j=0; j<X; j++){
            int value = pow(2, i + j);
            cout << setw(T) << value; 
            if(j != X - 1){
                cout << " ";
            }
        }
        cout << endl;
       }
       cout << endl;
    }

    return 0;
}