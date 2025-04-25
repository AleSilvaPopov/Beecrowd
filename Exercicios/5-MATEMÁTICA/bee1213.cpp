#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n){
       long long mult = 1;
       int contDig=1;

       while(mult % n != 0){
            mult = (mult * 10 + 1) % n;
            contDig++;
       }

       cout << contDig << "\n";
    }

    return 0;
}