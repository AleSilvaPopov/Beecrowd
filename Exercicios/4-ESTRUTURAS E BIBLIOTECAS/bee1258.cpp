#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
    string cor;
    char tamanho;
    string nome;
}camisa;

bool compararCamisas(const camisa& a, const camisa& b) {
    if (a.cor != b.cor) {
        return a.cor == "branco";
    }
    
    if (a.tamanho != b.tamanho) {
        int peso_a = (a.tamanho == 'P') ? 0 : (a.tamanho == 'M') ? 1 : 2;
        int peso_b = (b.tamanho == 'P') ? 0 : (b.tamanho == 'M') ? 1 : 2;
        return peso_a < peso_b;
    }
    
    return a.nome < b.nome;
}

int main(){
    int N;
    bool primeiroCaso = true;

    while(cin >> N && N != 0){
        if(!primeiroCaso) cout << '\n';

        vector<camisa> alunos(N);
        for(int i=0; i < N; i++){
            cin.ignore();
            getline(cin, alunos[i].nome);
            cin >> alunos[i].cor >> alunos[i].tamanho;
        }

        sort(alunos.begin(), alunos.end(), compararCamisas);

        for (const auto& aluno : alunos) {
            cout << aluno.cor << " "
                 << aluno.tamanho << " "
                 << aluno.nome << '\n';
        }

        primeiroCaso = false;
    }
    return 0;
}