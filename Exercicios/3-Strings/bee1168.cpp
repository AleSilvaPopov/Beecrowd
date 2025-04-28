#include <iostream>
#include <string>

using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        int contLeds=0;
        string numero; cin >> numero;

        for(char c : numero){
            if(c == '1') contLeds += 2;

            else if(c == '2' || c == '3' || c == '5') contLeds += 5;

            else if(c == '4') contLeds += 4;

            else if(c == '6' ||c == '9' || c == '0') contLeds += 6;

            else if(c == '7') contLeds += 3;

            else contLeds += 7; //c = 8
        }
        cout << contLeds << " leds\n";
    }
    return 0;
}