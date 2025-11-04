#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int a=0, b=1, c=0;
    while (c<=1000){
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
        
    }

return 0;
}