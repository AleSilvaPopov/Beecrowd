#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, cont = 0;

    cin >> N;

    for(int i=0; i<N; i++){
        cont++;

        string A, B;
        cin >> A >> B;

        if(B.size() > A.size()){
            cout << "nao encaixa" << endl;
        }
        else{
            string parte_final_A = A.substr(A.size() - B.size());
            if(parte_final_A == B){
                cout << "encaixa" << endl;
            }
            else{
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0; 
}  