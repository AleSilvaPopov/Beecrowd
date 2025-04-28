#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;

    while(cin >> N && N != 0){
        string DE; cin >> DE;
        char direcao = 'N';

        for(char c : DE){
            if(c == 'D'){
                if(direcao == 'N') direcao = 'L';

                else if(direcao == 'L') direcao = 'S';

                else if(direcao == 'S') direcao = 'O';

                else direcao = 'N';
            }
            else{
                if(direcao == 'N') direcao = 'O';

                else if(direcao == 'L') direcao = 'N';

                else if(direcao == 'S') direcao = 'L';

                else direcao = 'S';
            }
        }
        cout << direcao << "\n";
    }
    return 0;
}