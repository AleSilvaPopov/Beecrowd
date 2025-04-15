#include <iostream>
using namespace std;

int sobrou(int a, int b);

int main(){
    int NC, n, k;

    cin >> NC;
    for(int i = 1; i<=NC; i++){
        cin >> n >> k;
        cout << "Case " << i << ": "<< sobrou(n, k) + 1 << endl;
    }

    return 0;
}

int sobrou(int n, int k){
    if(n == 1){
        return 0;
    }
    return (sobrou(n - 1, k) + k) % n;
}