#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a >=0 && b <= 2) cout << "nova\n";

    else if(b >= 97 && b <= 100) cout << "cheia\n";

    else if(b > a) cout << "crescente\n";

    else{
        cout << "minguante\n";
    }

    return 0;
}