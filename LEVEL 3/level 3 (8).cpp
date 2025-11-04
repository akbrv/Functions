#include <iostream>
using namespace std;

int main() {
    int n, t = 0;
    cout << "Bir eded daxil edin: ";
    cin >> n;

    
    bool menfi = false;
    if (n < 0) {
        menfi = true;
        n = -n; 
    }

    while (n > 0) {
        int r = n % 10;        
        t = t * 10 + r; 
        n /= 10;                   
    }

    if (menfi)
        t = -t; 

    cout << "Ədədin tərsi: " << t << endl;
    return 0;
}
