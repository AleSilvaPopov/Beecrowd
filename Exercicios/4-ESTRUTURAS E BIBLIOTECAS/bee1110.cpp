#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> cards;
    int n; 
    
    while(cin >> n && n != 0){

        for(int i=1; i<=n; i++){
            cards.push(i);
        }
        
        cout << "Discarded cards: ";
        while(cards.size() > 1){ 
            cout << cards.front();
            if(cards.size() > 2){
                cout << ", ";
            }
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }

        cout << "\nRemaining card: "<< cards.front() << endl;
        cards.pop();
    }

    return 0;
}