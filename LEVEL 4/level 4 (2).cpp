#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;
    int b=0, c=0, d=0;
    
    while (a > 1)
    {
        b = a % 10;
        a = a / 10;
        d = d + 1;
    }
    cout << d << " Reqemlidir!";

return 0;
}