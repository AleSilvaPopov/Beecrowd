#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

long long fatorial(int N);

int main(){
    string S;

    while (cin >> S && S[0] != '0'){
        
        set<char> semRepetidas(S.begin(), S.end());
       
        long long quant = fatorial(semRepetidas.size());

        cout << quant << endl;
    }

    return 0;
}

long long fatorial(int N){
    if(N == 0 || N == 1){
        return 1;
    }
    else{
        return N * fatorial(N-1);
    }
}