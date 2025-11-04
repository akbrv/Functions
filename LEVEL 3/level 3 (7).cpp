#include <iostream>
using namespace std;

int main() {
    int a;
    int m = 0; 

    cout << "0 daxil edənə qədər ədədləri daxil et: " << endl;

    while (true) {
        cin >> a;
        if (a == 0)
            break;    
        m = m + a;      
    }

    cout << "Cəm: " << m << endl;
    return 0;
}
