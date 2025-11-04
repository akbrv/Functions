#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "ededi daxil edin: " ;
    int a;
    cin >> a;
    int cem = 0;
    for (int i=1;i<=a; i++ ){
        if (i%2==0){
            cem = cem + (pow(i,2));

        }else{
            continue;
        }
    }
    cout << cem ;


return 0;
}