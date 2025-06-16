#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string linha;
    bool primeiro = true;

    while(cin >> linha){

        if (primeiro) {
            primeiro = false;
        } else {
            cout << '\n';
        }

        unordered_map<char, int> contagem;
        for(char c : linha)
             contagem[c]++;

        vector<pair<char, int>> sortedVec(contagem.begin(), contagem.end());

        sort(sortedVec.begin(), sortedVec.end(), 
            [](const pair<char, int>& a, const pair<char, int>& b) {
                if (a.second != b.second) {
                    return a.second < b.second;
                }
                return a.first > b.first;
            });


        for(size_t i=0; i<sortedVec.size(); i++){
           cout << static_cast<int>(sortedVec[i].first) << ' ' << sortedVec[i].second << '\n';
        }
    }

    return 0;
}