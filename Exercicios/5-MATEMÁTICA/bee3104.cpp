#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    long long B;
    cin >> A >> B;

    long long remainder = 0;
    for (char c : A) {
        int digit = c - '0';
        remainder = (remainder * 10 + digit) % B;
    }

    cout << remainder << endl;

    return 0;
}