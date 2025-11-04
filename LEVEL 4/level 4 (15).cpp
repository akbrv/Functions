#include <iostream>

using namespace std;

int main() {
    cout << "Eded daxil edin (dovrdemn cixmaq ucun 0 daxil edin): ";
    int c = -99999;
    while (true)
    {   int b=0, d=0;
        int a;
        cin >> a;
        if (a!=0)
        {
            if (a>c)
            {
                c = a;
            }
            else{
                c = c;
            }
                
            continue;
        }
        else{
            cout << "Dovr bitdi " << " \nEn boyuk eded " << c;
            
        }
        
        
    }
    


    return 0;
}