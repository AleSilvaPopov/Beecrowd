#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        string num; cin >> num;
        int erro=0;

        if(num.size() == 3){
            if(num[0] != 'o') erro++;
            if(num[1] != 'n') erro++;
            if(num[2] != 'e') erro++;

            if(erro > 1) cout << "2\n";
            else cout << "1\n";
        }
        else{
            cout << "3\n";
        }
    }
    return 0;
}