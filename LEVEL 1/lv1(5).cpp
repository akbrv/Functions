#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    float celcius, fahrenheit;
    cout << "Selsi dərəcəsini daxil edin: ";
    cin >> celcius;
    fahrenheit = (celcius * 9/5) + 32;
    cout << celcius << " Selsi  dərəcəsi " << fahrenheit << " Fahrenheit dərəcəsinə bərabərdir." << endl;
    return 0;
}
