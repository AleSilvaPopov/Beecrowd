#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int N; cin >> N;

    while(N--){
        int M; cin >> M;
        unordered_map<string, double> valor;

        while(M--){
            string temp; 
            double v; 
            cin >> temp >> v;

            valor[temp] = v;
        }

        int P; cin >> P;
        double total=0;
        while(P--){
            string s; 
            double v; 
            cin >> s >> v;

            auto it = valor.find(s);
            if(it != valor.end()) total += it->second * v;
        }

        cout << fixed << setprecision(2) << "R$ " << total << '\n';
    }

    return 0;
}