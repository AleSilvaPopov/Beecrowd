#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    vector<float> num(6);

    for(int i=0; i<6; i++){
        cin >> num[i];
    }
    sort(num.begin(), num.end());

    float soma=0;
    int cont=0;
    for(int i=0; i<6; i++){
        if(num[i] > 0){
            soma += num[i];
            cont++;
        }
    }
    cout << fixed << setprecision(1)<< cont << " valores positivos\n" << soma/cont << endl;

    return 0;
}