#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c; cin >> a >> b >> c;

    if(a < b + c && b < a + c && c < a + b){
        cout << fixed << setprecision(1) << "Perimetro = " << a + b + c << endl;
    }
    else{
        float area = ((a+b)*c)/2;

        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }
    return 0;
}