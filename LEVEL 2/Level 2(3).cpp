#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main(){
   
    cout << "Uch eded daxil edin: " << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (a>b && a>c)
    {
        cout << a << " En boyuk ededdir " << endl;

    }else if (b>a && b>c)
    {
        cout << b << " En boyuk ededdir " << endl;
    }else if (c>a && c>b)
    {
        cout << c << " en boyuk ededdir " << endl;
    }else
    {
        cout << "Ededler beraberdir " << endl;
    }   
    

    return 0;
}
