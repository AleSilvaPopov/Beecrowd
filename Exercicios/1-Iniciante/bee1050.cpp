#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    unordered_map<int, string> DDD = {{61, "Brasilia"}, {71, "Salvador"}, {11, "Sao Paulo"}, {21, "Rio de Janeiro"}, 
    {32, "Juiz de Fora"}, {19, "Campinas"}, {27, "Vitoria"}, {31, "Belo Horizonte"}};

    int disca; cin >> disca;

    if(DDD.find(disca) != DDD.end())
        cout << DDD.at(disca) << endl;
    else
        cout << "DDD nao cadastrado\n";
    
    return 0;
}