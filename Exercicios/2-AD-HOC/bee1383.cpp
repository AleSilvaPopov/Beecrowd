#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void ler_sudoku(vector<vector<int>>&);
bool verificar_linha(vector<vector<int>>&);
bool verificar_coluna(vector<vector<int>>&);
bool mini_sudoku(vector<vector<int>>&);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;

    for(int m=0; m<N; m++){
        vector<vector<int>> sudoku(9, vector<int>(9));

        ler_sudoku(sudoku);
        
        cout << "Instancia " << m+1 << "\n";
        if(verificar_linha(sudoku) && verificar_coluna(sudoku) && mini_sudoku(sudoku)){
            cout << "SIM\n\n"; 
        }
        else{
            cout << "NAO\n\n";
        }
    }

    return 0;
}

void ler_sudoku(vector<vector<int>>& sudoku){

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> sudoku[i][j];
        }
    }
}

bool verificar_linha(vector<vector<int>>& sudoku){
    for(int i=0; i<9; i++){
        unordered_set<int> linha;

        for(int j=0; j<9; j++){
            int num = sudoku[i][j];
            
            if(linha.count(num)){
                return false;
            }
            linha.insert(num);
        }
    }
    return true;
}

bool verificar_coluna(vector<vector<int>>& sudoku){
    for(int i=0; i<9; i++){
        unordered_set<int> coluna;

        for(int j=0; j<9; j++){
            int num = sudoku[j][i];
            
            if(coluna.count(num)){
                return false;
            }
            coluna.insert(num);
        }
    }
    return true;
}

bool mini_sudoku(vector<vector<int>>& sudoku){
    int subgrade = 3;
    for(int linhaSub=0; linhaSub<9; linhaSub += subgrade){
        for(int colunaSub=0; colunaSub < 9; colunaSub += subgrade){
            unordered_set<int> numeros;

            for(int i=0; i<subgrade; i++){
                for(int j=0; j<subgrade; j++){
                    int num = sudoku[linhaSub + i][colunaSub + j];

                    if(numeros.count(num)){
                        return false;
                    }
                    numeros.insert(num);
                }
            }
        }
    }   
    return true;
}