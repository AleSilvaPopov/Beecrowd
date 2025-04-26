#include <iostream>

using namespace std;

int main(){
    int L, R;

    while(cin >> L >> R && L != 0 && R != 0){
        cout << L + R << '\n';
    }

    return 0;
}