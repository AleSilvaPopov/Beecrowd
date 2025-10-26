#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n; cin >> n;

    for(int i=2; i<=n; i+=2){
        int exp = pow(i, 2);
        cout << i << "^2 = " << exp << endl;
    }

    return 0;
}