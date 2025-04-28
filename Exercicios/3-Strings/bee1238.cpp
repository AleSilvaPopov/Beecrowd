#include <iostream>
#include <string>

using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        string s1, s2; cin >> s1 >> s2;

        size_t maior = max(s1.size(), s2.size());

        string final;
        for(size_t j=0; j<maior; j++){
            if(j < s1.size()) final += s1[j];
            if(j < s2.size()) final += s2[j];
        }

        cout << final << "\n";
    }
    return 0;
}