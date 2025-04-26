#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;

    while(cin >> A >> B >> C){
        if(A == B && B == C){
            cout << "*\n";
        }
        else if(A == B){
            cout << "C\n";
        }
        else if(A == C){
            cout << "B\n";
        }
        else if(B == C){
            cout << "A\n";
        }
    }

    return 0;
}