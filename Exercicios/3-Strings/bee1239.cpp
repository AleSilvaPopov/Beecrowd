#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string texto;

    while(getline(cin, texto)){
        string formatada;
        bool flag1 = false, flag2 = false;
        for(char c : texto){
            if(c == '_'){
                if(!flag1){
                    formatada += "<i>";
                    flag1=true;
                }

                else{
                    formatada += "</i>";
                    flag1=false;
                }
            }
            else if(c == '*'){
                if(!flag2){
                    formatada += "<b>";
                    flag2=true;
                }

                else{
                    formatada += "</b>";
                    flag2=false;
                }
            }
            else{
                formatada += c;
            }
        }

        cout << formatada << endl;
    }

    return 0;
}