#include <iostream>
using namespace std;
int main(){
    cout << "Ayin nomresini daxil edin: ";
    int a;
    cin >> a;
    
    switch (a) {
        case 12:
        case 1:
        case 2:
            cout << "Qis fəsli" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Yaz fəsli" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Yay fəsli" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Payiz fəsli" << endl;
            break;
        default:
            cout << "Duzgun ay nomresi daxil edin!" << endl;
            break;
    }

    return 0;
}
