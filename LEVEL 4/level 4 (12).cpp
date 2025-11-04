#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;

    int b=0, c=0, d=0;
    for (int i=1; i<a; i++){
        if (a%i==0){
            b = b + i;
        }
    }
    if (b==a){
        cout << a << " Mukemmel Ededdir!";

    }
    else{
        cout << a << " Mukemmel eded deyil!";
    }
return 0;
}