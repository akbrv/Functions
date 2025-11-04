#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "iki eded daxil edin: ";
    int a, b;
    cin >> a >> b;

    if (a>b)
    {
        cout << a << " boyukdur " << endl;
    }
    else if (b>a)
    {
        cout << b << " boyukdur " << endl;
    }
    else
    {
        cout << "ededler beraberdir " << endl;
    }
    

    return 0;
}
