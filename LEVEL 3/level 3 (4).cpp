#include <iostream>
using namespace std;

int main() {
    cout << "Bir eded daxil edin: ";
    int a;
    cin >> a;
    int f=1;
    for(int i=1; i<=a; i++){
        f = f * i;
    }
    cout << f << endl;
    return 0;
}
