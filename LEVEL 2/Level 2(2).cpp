#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Bir eded daxil ein: ";
    int a;
    cin >> a;

    if (a>0)
    {
        cout << a << " musbet ededdir " << endl;
    }
    else if (a<0)
    {
        cout << a << " menfi ededdir " << endl;
    }
    else
    {
        cout << "eded sifirdir " << endl;
    }
    

    return 0;
}
