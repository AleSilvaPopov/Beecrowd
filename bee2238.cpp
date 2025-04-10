#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    vector<int> divisorC;
    for(int i=1; i<C;i++){
        if(C % i == 0 && i % A == 0 && i % B != 0 && D % i != 0){
            divisorC.push_back(i);
        }
    }
    if(!divisorC.empty()){
        sort(divisorC.begin(), divisorC.end());
        cout << divisorC[0] << endl;
    }   
    else{
        cout << "-1" << endl;
    }
}