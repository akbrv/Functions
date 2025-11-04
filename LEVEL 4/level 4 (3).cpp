#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Eded daxil edin: ";
    int N;
    cin >> N;
    for (int i=2; i<=N; i++){
        int s;
        s = 0;
        for (int j=2; j<i;j++)
            if(i%j==0){
            s = s + 1;
            }
            if(s==0){
                cout << i << " ";

            }
            else{
                continue;
            }
    }


return 0;
}