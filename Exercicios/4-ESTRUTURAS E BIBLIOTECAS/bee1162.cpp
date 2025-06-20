#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(vector<int> vetor, int tamanho) {
    int cont=0;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                cont++;
            }
        }
    }
    return cont;
}

int main(){
    int N; cin >> N;

    while(N--){
        int L; cin >> L;
        vector<int> vagoes(L);
        for(int i=0; i<L; i++){
            cin >> vagoes[i];
        }

        cout << "Optimal train swapping takes " << bubbleSort(vagoes, L) << " swaps.\n";
    }
    return 0;
}