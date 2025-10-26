#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> estrelas(n);
    vector<int> contSitios(n);

    long long somaCarneiros=0;

    for(int i=0; i<n; i++){
        cin >> estrelas[i];
        contSitios[i] = 0;
        somaCarneiros += estrelas[i];
    }

    int atual=0;
    int somaSitio=0;

    while(atual >= 0 && atual <n){
        if(contSitios[atual] == 0){
            contSitios[atual] = 1;
            somaSitio++;
        }

        int prox;
        bool temCarneiro = (estrelas[atual] > 0);


        if(estrelas[atual] % 2 == 0){
            prox = atual - 1;
        }
        else{
            prox = atual + 1;
        }

        if(temCarneiro){
            estrelas[atual] -= 1;
            somaCarneiros -= 1;
        }

        atual = prox;
    }

    cout << somaSitio << " " << somaCarneiros << endl;

    return 0;
}