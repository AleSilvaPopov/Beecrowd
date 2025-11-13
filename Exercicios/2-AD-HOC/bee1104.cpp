#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b && a != 0 && b != 0){
        set<int> alice, beatriz;
        int carta;

        for(int i=0; i<a; i++){
            cin >> carta;
            alice.insert(carta);
        }

        for(int i=0; i<b; i++){
            cin >> carta;
            beatriz.insert(carta);
        }
        int contBeatriz=0;
        for(int c : beatriz){
            if(alice.find(c) == alice.end()) contBeatriz++;
        }

        int contAlice=0;
        for(int c : alice){
            if(beatriz.find(c) == beatriz.end()) contAlice++;
        }

        if(contAlice > contBeatriz) cout << contBeatriz << endl;

        else cout << contAlice << endl;
    }

    return 0;
}