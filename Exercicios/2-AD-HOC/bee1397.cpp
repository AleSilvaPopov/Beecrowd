#include <iostream>

using namespace std;

int main(){
    int N;

    while(cin >> N && N != 0){
        int A, B, contA=0, contB=0;

        for(int i=0; i<N; i++){
            cin >> A >> B;
            if(A > B){
                contA++;
            }
            else if(B > A){
                contB++;
            }
        }

        cout << contA << " " << contB << '\n';
    }

    return 0;
}