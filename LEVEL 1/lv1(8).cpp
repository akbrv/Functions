#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    float a;
    cout << "Kvadratin terefini daxil edin: ";
    cin >> a;
    cout << "Kvadratin sahesi: " << pow(a,2) << endl;
    cout << "Kvadratin perimetri: " << 4 * a << endl;

    return 0;
}
