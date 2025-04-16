#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n, x;
    cin >> n >> x;

    cin.ignore();

    string titans;
    cin >> titans;
    
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    
    vector<int> muralhas(n, x); 

    int p = 0, m = 0, g = 0; 

    for (char t : titans) {
        switch (t) {
            case 'P':
                while (muralhas[p] < t1) p++;
                muralhas[p] -= t1;
                break;
            case 'M':
                while (muralhas[m] < t2) m++;
                muralhas[m] -= t2;
                break;
            default:
                while (muralhas[g] < t3) g++;
                muralhas[g] -= t3;
                break;
        }
    }

    vector<int> resultado = {p, m, g};
    sort(resultado.begin(), resultado.end());

    cout << resultado[2] + 1 << endl;

    return 0;
}
