#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;
    if (100<=a && a<999){
        int m = 0, b = 0, c = 0;
        m = a / 100;
        b = a / 10 % 10;
        c = a % 10;
        if (m + b + c == 10){
        cout << "Eded 10-a beraberdir " << "ve eded: " << a << endl;
        }
        else {
            cout << "Eded 10-a beraber deyil" << endl;
        }
    }
    else{
        cout << "Eded 3 reqemli deyil" << endl;
    }
    return 0;
}
