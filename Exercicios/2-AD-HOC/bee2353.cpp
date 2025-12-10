#include <iostream>
#include <vector>
using namespace std;

typedef struct{
    int L;
    int C;
}bandeija;

int main(){ 
    int N;
    cin >> N;

    vector<bandeija> garcom(N);
    int contQuebrados=0;

    for(int i=0; i<N; i++){
        cin >> garcom[i].L >> garcom[i].C;
        if(garcom[i].L > garcom[i].C)
            contQuebrados += garcom[i].C;
    }

    cout << contQuebrados << endl;

    return 0;
}