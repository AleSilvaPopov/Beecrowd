#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2; 
    
    while(cin >> h1 >> m1 >> h2 >> m2 && !(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)){
        int MinIniciaisTot = h1 * 60 + m1;
        int MinFinalTot = h2 * 60 + m2;
        int MinTotal;

        if(MinIniciaisTot > MinFinalTot){
            MinTotal = (1440 - MinIniciaisTot) + MinFinalTot;
        }else{
            MinTotal = MinFinalTot - MinIniciaisTot;
        }

        cout << MinTotal << "\n";
    }

    return 0;
}