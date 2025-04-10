#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string  n1, n2;

    while(cin >> n1 >> n2 && (n1 != "0" || n2 != "0")){

        int max_len = max(n1.size(), n2.size());
        n1 = string(max_len - n1.size(), '0') + n1;
        n2 = string(max_len - n2.size(), '0') + n2;

        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());

        unsigned int carry = 0;
        int carry_anterior = 0;

        for(int i=0; i<max_len; i++){
            int dgt1 = n1[i] - '0', dgt2 = n2[i] - '0';

            int sum = dgt1 + dgt2 + carry_anterior;
            carry_anterior = sum / 10;

            if(carry_anterior > 0){
                carry++;
            }
        }

        if(carry == 0){
            cout << "No carry operation." << endl;
        }
        else if(carry == 1){
            cout << carry << " carry operation." << endl;
        }
        else{
            cout << carry << " carry operations." << endl;
        }
    }

    return 0;
}