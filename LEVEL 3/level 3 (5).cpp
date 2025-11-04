#include <iostream>
using namespace std;

int main() {
    cout << "Bir eded daxil edin: ";
    int a;
    cin >> a;

    int m=0, b=0;
    while (a > 1)
    {
        m = a % 10;
        b = b + m;
        a = a / 10;
    }
    cout << "reqemleri cemi " << b << "-dir";
    
    return 0;
}
