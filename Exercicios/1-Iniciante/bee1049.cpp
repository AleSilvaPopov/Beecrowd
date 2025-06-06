#include <iostream>
#include <string>

using namespace std;

int main(){
    string p1; cin >> p1;

    if(p1 == "vertebrado"){
        string p2; cin >> p2;
        if(p2 == "ave"){
            string p3; cin >> p3;
            if(p3 == "carnivoro") cout << "aguia\n";

            else cout << "pomba\n";
        }
        else{
            string p3; cin >> p3;

            if(p3 == "onivoro") cout << "homem\n";

            else cout << "vaca\n";
        }
    }
    else{
        string p2; cin >> p2;

         if(p2 == "inseto"){
            string p3; cin >> p3;
            if(p3 == "hematofago") cout << "pulga\n";

            else cout << "lagarta\n";
        }
        else{
            string p3; cin >> p3;
            if(p3 == "hematofago") cout << "sanguessuga\n";

            else cout << "minhoca\n";
        }
    }
    return 0;
}