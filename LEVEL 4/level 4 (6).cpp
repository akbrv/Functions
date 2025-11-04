#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int N;
    cout << "Nece eded daxil edeceksiniz? ";
    cin >> N;

    if (N <= 0) {
        cout << "Sef daxiletme. En az 1 eded olmalidir." << endl;
        return 1; 
    }

    int eded;
    int en_kicik;
    int en_boyuk;
    double cem = 0.0; 

    cout << "1. ededi daxil edin: ";
    cin >> eded;

    en_kicik = eded;
    en_boyuk = eded;
    cem = eded;

    for (int i = 2; i <= N; i++) {
        cout << i << ". ededi daxil edin: ";
        cin >> eded;

        cem += eded;

        if (eded > en_boyuk) {
            en_boyuk = eded;
        }

        if (eded < en_kicik) {
            en_kicik = eded;
        }
    }

    double ortalama = cem / N;

    cout << "\n--- NETICELER ---" << endl;
    cout << "En boyuk eded: " << en_boyuk << endl;
    cout << "En kicik eded: " << en_kicik << endl;
    
    cout << "Ededi orta: " << fixed << setprecision(2) << ortalama << endl;

    return 0;
}