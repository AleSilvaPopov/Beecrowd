#include <iostream>

int main(){
    long long A, B;
    
    while(std::cin >> A >> B){
        if(B > A){
            std::cout << B-A << "\n";
        }
        else{
            std::cout << A-B << "\n";
        }
    }
    return 0;
}