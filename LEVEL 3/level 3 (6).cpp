#include <iostream>
using namespace std;
    int main() {
        cout << "Bir eded daxil edin: ";
        int a;
        cin >> a;
        int m=0;
        for(int i=1; i<=a; i++){
            m += i;
        }
        cout << m;
        return 0;
}
