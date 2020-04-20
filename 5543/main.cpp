#include <iostream>
using namespace std;
int main(void){
    int price[5] = {0, };
    int smallb=2000, smallw=2000;
    for(int i=0; i<5; i++) cin >> price[i];

    for(int i=0; i<3; i++) if(price[i] < smallb) smallb = price[i];
    for(int i=3; i<5; i++) if(price[i] < smallw) smallw = price[i];

    cout << smallb + smallw - 50 << endl;

    return 0;
}