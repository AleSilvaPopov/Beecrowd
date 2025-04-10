#include <iostream>
#include <algorithm>

int main(){
    int X, Y, M;
      
    while(std::cin >> X >> Y >> M){
        int r_maior = std::max(X, Y);
        int r_menor = std::min(X, Y);

        for(int i=0; i<M; i++){
            int xi, yi;
            std::cin >> xi >> yi;

            int c_maior = std::max(xi, yi);
            int c_menor = std::min(xi, yi);
            
            if (c_maior <= r_maior && c_menor <= r_menor) {
                std::cout << "Sim\n";
            } else {
                std::cout << "Nao\n";
            }
        }
    }
    return 0;
}