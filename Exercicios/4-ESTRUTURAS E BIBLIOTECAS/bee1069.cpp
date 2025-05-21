#include <iostream>
#include <stack>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int N; cin >> N;

    while(N--){
        stack<char> diamantes;

        string minerios; cin >> minerios;
        int cont=0;

        for(char c : minerios){
            if(c == '<'){
                diamantes.push(c);
            } 
            else if(c == '>' && !diamantes.empty()){
                if(diamantes.top() == '<'){
                    cont++;
                    diamantes.pop();
                }
            }
        }
        cout << cont << '\n';
    }
    return 0;
}