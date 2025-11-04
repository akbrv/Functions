#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Bir eded daxil edin" << endl;
    int a, b;
    cin >> a;
    
    b = a%2;

    switch (b)
    {
    case 0:
        cout << a << " cut ededdir " << endl;
        break;
    
    default:
        cout << a << " tek ededdir " << endl;    
    break;
    }
    

    return 0;
}
