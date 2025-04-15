#include <iostream>
#include <vector>   
#include <iomanip>
using namespace std;

int main(){
    vector<float> A(100);

    for(int i = 0; i<100; i++){
        cin >> A[i];
    }

    for(int i = 0; i<100; i++){
        if(A[i] <= 10){
            cout << fixed << setprecision(1) << "A[" << i << "] = " << A[i] << endl;
        }
    }

    return 0;
}