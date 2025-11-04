#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;
    int q=1, b=0, c=0, m=0;
    m=a;
    while (a > 0) {
        q = a % 10;
        b = b * 10 + q;
        a /= 10;
    }
    if (b == m) {
        cout << m << " ededinin tersi ozune beraberdir!";
    } else {
        cout << m << " ededinin tersi ozune beraber deyil!";
    }

    return 0;
}
