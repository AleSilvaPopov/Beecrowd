#include <iostream>
#include <string>
using namespace std;

int main(){ 
    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string a, b; cin >> a >> b;
        int cont=0;
        for(size_t j=0; j<a.size(); j++){
            while(a[j] != b[j]){
                if(a[j] == 'z'){
                    a[j] = 'a';
                    cont++;
                }
                else{
                    a[j]++;
                    cont++;
                }
            }
        }
        cout << cont << "\n";
    }
    return 0;
}