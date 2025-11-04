#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Uc reqemli Ededinizi daxil edin:";
    int a;
    int b=0, c=0, d=0, m=0;
    cin >> a;
    m = a;
    if (a>=1000){
        cout << "Duzgun eded daxil edin!!!";
    }
    else{
        while (a > 0)
        {
            c = a % 10;
            b = b + (pow(c,3));
            a = a / 10;

        }
        if (m==b){
            cout << m << " Armstronq ededdir";

        }
        else{
            cout << m << " Armstronq eded deyil";
        }
        
    }

return 0;
}