#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int N;

    while(cin >> N && N != 0){
        while (true)
        {
            vector<int> vagoes(N);
            cin >> vagoes[0];
            if(vagoes[0] == 0){
            cout << '\n';
            break;
            }

            for(int i=1; i<N; i++) cin >> vagoes[i];

            stack<int> estacao;
            int atual = 1;
            bool possivel = true;

            for(int num : vagoes){
                while(atual <= N && (estacao.empty() || estacao.top() != num)){
                    estacao.push(atual);
                    atual++;
                }

                if(!estacao.empty() && estacao.top() == num) estacao.pop();

                else {
                    possivel = false;
                    break;
                }
            }
            if(possivel) cout << "Yes\n";

            else cout << "No\n";
        }
    }
    return 0;
}