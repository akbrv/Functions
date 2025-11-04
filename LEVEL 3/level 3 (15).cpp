#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "bir eded daxil edin:";
    int a;
    cin >> a;
    int m = 0;
    for (int i = 1; i <=a; i++)
    {
        int b;
        cin >> b;
        m += b;
    
    }
    
    cout << m ;

    return 0;
}
