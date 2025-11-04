#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Neçə element istənilir? ";
    cin >> N;

    // İlk iki Fibonacci ədədi
    int a = 0, b = 1;

    cout << "Fibonacci ardicilligi: ";

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        int next = a + b; // növbəti ədəd
        a = b;            // dəyişənləri irəli sürüşdürürük
        b = next;
    }

    cout << endl;
    return 0;
}
