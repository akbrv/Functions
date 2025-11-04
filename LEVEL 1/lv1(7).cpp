#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
    cout << "Birinci ededi dail edin: ";
    int a;
    cin >> a;
    cout << "Ikinci ededi daxil edin: ";
    int b;
    cin >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "Ededlerin deyismis formasi: \n" << endl;
    cout << "Birinci eded: " << b << " oldu \n" <<endl;
    cout << "Ikinci eded: " << a << " oldu\n" <<endl;

    return 0;
}
