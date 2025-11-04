#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: ";
    int a;
    cin >> a;
    int c=0, b=0;

    for(int i=1; i<=a; i++){
        if (a%i==0){
            c = c + 1;
        
        }
        else{
            continue;

        }
    } 
    cout << "Bolenlerinin sayi " << c << " -dir";



return 0;
}