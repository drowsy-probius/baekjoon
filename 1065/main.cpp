#include <iostream>
using namespace std;

bool isHan(int n){
    if(n<100) return true;
    else if( 2*((n/10)%10) == n%10 + n/100 ) return true;
    else return false;
}

int main(void){
    int n, cnt=0;
    cin >> n;

    for(int i=n; i>0; i--) if(isHan(i)) cnt++;
    cout << cnt << endl;
    return 0;
}