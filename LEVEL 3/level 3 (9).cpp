#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;

    int b = 2, c = 0;

    while (b <= sqrt(a)) { 
        if (a % b == 0) {
            c++;
        }
        b++;
    }

    if (c == 0 && a > 1) {
        cout << a << " sade ededdir." << endl;
    } else {
        cout << a << " murekkeb ededdir." << endl;
    }

    return 0;
}
