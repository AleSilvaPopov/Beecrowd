#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;

    while(cin >> N){
        map<int, pair<int, int>> sapatos;

        for(int i=0; i<N; i++){
            int M;
            char L;
            cin >> M >> L;

            if(L == 'E') sapatos[M].first++;

            else sapatos[M].second++;

        }
        int contPares=0;

        for(auto& entrada : sapatos) contPares += min(entrada.second.first, entrada.second.second);

        cout << contPares << "\n";
    }
    return 0;
}