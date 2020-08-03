#include <iostream>
using namespace std;

int main(void){
    int cnt = 0;
    int target, a=0;
    cin >> target;
    a = target;
    do{
        a = (a%10)*10 + (a/10+a%10)%10;
        cnt++;
    }while( a!=target );

    cout << cnt;
    return 0;
}