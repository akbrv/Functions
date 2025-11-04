#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Eded daxil edin: " << endl;
    int a;
    cin >> a;
    cout << "edeceyiniz emeli daxil edin:" << endl;
    char c;
    cin >> c;
    cout << "Ikinci ededi daxil edin : " << endl;
    int b;
    cin >> b;

    switch (c)
    {
    case '+':
        cout << "Cavab: " << a + b << endl;
        break;
    case '-':
        cout << "Cavab: " << a - b << endl;
        break;
    
    case '*':
        cout << "Cavab: " << a * b << endl;
        break;

    case '/':
        cout << "Cavab: " << a / b << endl; 
        break;
    default:
        cout << "Duzgun emel daxil edin!" << endl;
        break;
    }

    return 0;
}
