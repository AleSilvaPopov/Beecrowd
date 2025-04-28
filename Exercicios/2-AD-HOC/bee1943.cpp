#include <iostream>

int main(){
    int k; std::cin >> k;

    if(k == 1) std::cout << "Top 1\n";

    else if (k <= 3) std::cout << "Top 3\n";

    else if (k <= 5) std::cout << "Top 5\n";

    else if (k <= 10) std::cout << "Top 10\n";

    else if (k <= 25) std::cout << "Top 25\n";

    else if (k <= 50) std::cout << "Top 50\n";

    else std::cout << "Top 100\n";

    return 0;
}