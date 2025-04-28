#include <iostream>

using namespace std;

int main(){
    int k;

    while(cin >> k && k != 0){
        int N, M; cin >> N >> M;

        for(int i=0; i<k; i++){
            int X, Y; cin >> X >> Y;

            if(X == N || Y == M) cout << "divisa\n";

            else if(X > N && Y > M) cout << "NE\n";

            else if(X < N && Y > M) cout << "NO\n";

            else if(X < N && Y < M) cout << "SO\n";

            else cout << "SE\n";
        }
    }

    return 0;
}