#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string num(string N);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;

    while (getline(cin, N)) {
        if (N == "00") {
            cout << "0\n";
            continue;
        }
        cout << num(N) << endl;
    }

    return 0;
}

string num(string N) {
    string nova;

    if (N.empty() || N.find_first_not_of(" ,") == string::npos) {
        return "error";
    }

    for (char c : N) {
        if (c == 'o' || c == 'O') {
            nova += '0';
        }
        else if (c == 'l') {
            nova += '1';
        }
        else if (isdigit(c)) {
            nova += c;
        }
        else if (c != ',' && c != ' ') {
            return "error";
        }
    }

    if (nova.empty()) {
        return "error";
    }

    size_t zero_esquerda = nova.find_first_not_of('0');
    if (zero_esquerda != string::npos) {
        nova = nova.substr(zero_esquerda);
    } else {
        nova = "0";
    }

    if (nova.length() > 10 || (nova.length() == 10 && nova > "2147483647")) {
        return "error";
    }

    return nova;
}