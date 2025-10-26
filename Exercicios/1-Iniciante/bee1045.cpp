#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<float> num(3);
    for(int i=0; i<3; i++){
        cin >> num[i];
    }
    sort(num.rbegin(), num.rend());

    float a, b, c;
    a = num[0];
    b = num[1];
    c = num[2];

    if(a >= b + c) cout << "NAO FORMA TRIANGULO\n";

    else{
        if(pow(a,2) == pow(b, 2) + pow(c, 2)) cout << "TRIANGULO RETANGULO\n";

        else if(pow(a,2) > pow(b, 2) + pow(c, 2)) cout << "TRIANGULO OBTUSANGULO\n";

        else if(pow(a,2) < pow(b, 2) + pow(c, 2)) cout << "TRIANGULO ACUTANGULO\n";

        if(a == b && b == c) cout << "TRIANGULO EQUILATERO\n";

        else if(a == b || b == c || a == c) cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}