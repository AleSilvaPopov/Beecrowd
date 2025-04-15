#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int X;
        cin >> X;
            
        uint64_t graos = (1ULL << X) - 1;
        uint64_t em_kg = (graos)/12000;


        cout << em_kg << " kg"<< endl;
    }

        return 0;
}