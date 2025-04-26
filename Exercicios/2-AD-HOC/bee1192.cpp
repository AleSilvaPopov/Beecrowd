#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        int A, B;
        char S;
        cin >> A >> S >> B;

        if(A == B){
            cout << A*B << '\n';
            continue;
        }
        if(isupper(S)){
            cout << B - A << '\n';
        }
        else{
            cout << A + B << '\n';
        }
    }
    return 0;
}