#include <string>
#include <iostream>
#include <iomanip>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int N;
    bool primeiroCaso = true;

    while(cin >> N && N != 0){
        queue<string> palavras;
        size_t maior = 0;

        for(int i=0; i < N; i++){
            string temp; cin >> temp;
            palavras.push(temp);

            if(maior < temp.size()){
                maior = temp.size();
            }
        }

        if (!primeiroCaso) cout << endl;

        primeiroCaso = false;


        while(!palavras.empty()){
            cout << setw(maior) << right << palavras.front() << "\n";
            palavras.pop();
        }
    }

    return 0;
}