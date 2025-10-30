#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> conector1(5);
    vector<int> conector2(5);

    for(int i=0; i<5; i++){
        cin >> conector1[i];
    }

    
    for(int i=0; i<5; i++){
        cin >> conector2[i];
    }

    bool flag = true;
    for(int i=0; i<5; i++){
        if(conector1[i] == conector2[i]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Y\n";

    else cout << "N\n";

    return 0;
}