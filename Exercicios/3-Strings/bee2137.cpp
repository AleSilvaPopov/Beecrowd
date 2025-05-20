#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int N; 
    
    while(cin >> N && N != 0){

        vector<int> livros(N);
        for(int i=0; i<N; i++){
            cin >> livros[i];
        }

        sort(livros.begin(), livros.end());

        for(int i=0; i<N; i++){
            cout << setw(4) << setfill('0') << livros[i] << "\n";
        }
    }
    
    return 0;
}