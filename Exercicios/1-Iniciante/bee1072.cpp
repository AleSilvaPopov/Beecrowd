#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    
    int in=0, out=0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x >= 10 && x <= 20) in++;

        else out++;
    }

    cout << in << " in\n"
    << out << " out\n";

    return 0;
}