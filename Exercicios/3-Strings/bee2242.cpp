#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string rs; cin >> rs;

    string vogais1, vogais2;

    for(char c : rs){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vogais1 += c;
    }

    vogais2 = vogais1;
    reverse(vogais2.begin(), vogais2.end());

    if(vogais1 == vogais2) cout << "S\n";

    else cout << "N\n";

    return 0;
}