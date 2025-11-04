#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: (Ikiliye kecmek istediyiniz ededi:) ";
    int a;
    cin >> a;
    int b=0, c=0, d=0, m=0;
    int qüvvet = 1; 
    
    while (a > 0){
        b = a % 2;
        d = d + b * qüvvet; 
        
        a = a / 2;
        qüvvet = qüvvet * 10;
    }
    cout << d ;

return 0;
}