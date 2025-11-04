#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Dairenin radiusunu daxil din: ";
    double r;
    cin >> r;
    cout << "Dairenin sahesi: " << M_PI * pow(r,2) << endl;
    cout << "Dairenin uzunlugu: " << 2 * M_PI * r << endl;

    return 0;
}
