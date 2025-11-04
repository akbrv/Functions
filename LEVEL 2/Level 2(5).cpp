#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Baliniz daxil edin: ";
    int a;
    cin >> a;
    switch (a)
    {
    case 91 ... 100:
        cout << "A" << endl;
        break;
    case 81 ... 90:
        cout << "B" << endl;
        break;
    case 71 ... 80:
        cout << "C" << endl;
        break;
    case 61 ... 70:
        cout << "D" << endl;
        break;
    case 51 ... 60:
        cout << "E" << endl;
        break; 
    case 0 ... 50:
        cout << "F" << endl;
        break;

    default:
        cout << "Duzgun bal daxil edin" << endl;
        break;
    }

    return 0;
