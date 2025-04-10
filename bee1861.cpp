    #include <iostream>
    #include <string>
    #include <map>
    #include <set>

    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        string ass, vit;
        set<string> vitimas;
        map<string, int> assasinos;

        while(cin >> ass >> vit){
            assasinos[ass]++;
            vitimas.insert(vit);
        }

        cout << "HALL OF MURDERERS\n";

        for(auto &[nome, n_vit] : assasinos){
            if(!vitimas.count(nome)){
                cout << nome << " " << n_vit << "\n";
            }
        }

        return 0;
    }