#include <iostream>

using namespace std;

int contDg(int i, long long A, long long B);
int countDigitFrom1ToX(int d, long long x);

int main(){
    long long A, B;

    while(cin >> A >> B && A && B){
        for(int i=0; i<10; i++){
            cout << contDg(i, A, B) << (i < 9 ? " " : "");
        }
        cout << "\n";
    }
    return 0;
}

int countDigitFrom1ToX(int d, long long x) {
    if (x < 0 || d < 0 || d > 9) return 0;

    long long count = 0;
    long long factor = 1;
    while (x / factor != 0) {
        long long lower = x - (x / factor) * factor;
        long long curr = (x / factor) % 10;
        long long higher = x / (factor * 10);

        if (d != 0) {
            if (curr < d)
                count += higher * factor;
            else if (curr == d)
                count += higher * factor + lower + 1;
            else
                count += (higher + 1) * factor;
        } else {
            if (higher != 0) {
                if (curr == 0)
                    count += (higher - 1) * factor + lower + 1;
                else
                    count += higher * factor;
            }
        }

        factor *= 10;
    }

    return count;
}

int contDg(int N, long long A, long long B){
        if(A > B) return 0;

        long long start = A > 1 ? A - 1 : 0;

    return countDigitFrom1ToX(N, B) - countDigitFrom1ToX(N, start);
}
