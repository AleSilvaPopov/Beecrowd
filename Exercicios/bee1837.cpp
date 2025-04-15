#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(b == 0){
        cout << "0 0" << endl;
        return 0;
    }

    int q = a/b, r=a%b;

    if (r < 0) {
        if (b > 0) {
            r += b;
            q -= 1;
        } else {
            r -= b;
            q += 1; 
        }
    }

    cout << q << " " << r << endl;

    return 0;
}