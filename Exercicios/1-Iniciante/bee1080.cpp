#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> num(100);
    int maior, pos;
    for(int i=0; i<100; i++){
        cin >> num[i];
        if(i == 0) {
            maior = num[i];
            pos = i+1;
        }

        else if(num[i] > maior){
            maior = num[i];
            pos = i+1;
        }
    }

    cout << maior << endl << pos << endl;

    return 0;
}