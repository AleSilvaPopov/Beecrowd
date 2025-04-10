#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> N(20);
    int temp;

    for(int i = 0; i<20; i++){
        cin >> N[i];
    }   
    for(int i= 0, j = 19; i<10; i++, j--){
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
    }
    for(int i = 0; i<20; i++){
        cout << "N[" << i<< "] = " << N[i] << endl;
    }
    return 0;
}