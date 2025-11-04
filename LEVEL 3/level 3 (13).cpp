#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Ededi daxil edin: ";
    if (!(cin >> n)) return 0;

    if (n < 0) { 
        cout << n << " palindrom deyil\n";
        return 0;
    }

    long long original = n;
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (reversed == original)
        cout << original << " palindromdur\n";
    else
        cout << original << " palindrom deyil\n";

    return 0;
}
