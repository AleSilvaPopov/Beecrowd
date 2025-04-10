#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

typedef struct{
    int dano;
    int raio[3];
}magias;

map<string, magias> mapaMagias = {
    {"fire", {200, {20, 30, 50}}},
    {"water", {300, {10, 25, 40}}},
    {"earth", {400, {25, 55, 70}}},
    {"air", {100, {18, 38, 60}}}
};

int calcularDano(int w, int h, int x0, int y0, std::string magia, int N, int cx, int cy);

int main(){
    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int w, h, x0, y0;
        cin >> w >> h >> x0 >> y0;

        std::string magia;
        int N, cx, cy;
        cin >> magia >> N >> cx >> cy;

        int dano = calcularDano(w, h, x0, y0, magia, N, cx, cy);

        cout << dano << "\n";

    }

    return 0;
}

int calcularDano(int w, int h, int x0, int y0, std::string magia, int N, int cx, int cy){
    magias data = mapaMagias[magia];
    int raio = data.raio[N - 1];
    
    int closestX = max(x0, min(cx, x0 + w));
    int closestY = max(y0, min(cy, y0 + h));
    
    // Calcula a distância ao quadrado (evita usar raiz quadrada)
    int dx = closestX - cx;
    int dy = closestY - cy;
    int distanceSquared = dx * dx + dy * dy;
    
    // Verifica se há interseção
    if (distanceSquared <= raio * raio) {
        return data.dano;
    }
    return 0;
} 