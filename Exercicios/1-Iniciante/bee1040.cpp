#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    vector<float> notas(4);

    float total=0;
    for(int i=0; i<4; i++){
        cin >> notas[i];
        notas[i] = notas[i];
    }
    total += notas[0]*2;
    total += notas[1]*3;
    total += notas[2]*4;
    total += notas[3];

    float media = total/(10);
    cout << fixed << setprecision(1) << "Media: " << media << "\n";

    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    }
    else if(media < 5){
        cout << "Aluno reprovado.\n";
    }
    else{
        cout << "Aluno em exame.\n";
        float exame; cin >> exame;

        cout << "Nota do exame: " << exame << "\n";
        media = (media + exame)/2;

        if(media >= 5){
            cout << "Aluno aprovado.\n";
        }
        else{
            cout << "Aluno reprovado.\n";
        }
        cout << fixed << setprecision(1) << "Media final: " << media << "\n";
    }
    return 0;
}