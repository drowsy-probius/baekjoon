#include <iostream>
using namespace std;
int main(void){
    int T=3;
    int _x[3], _y[3];
    while(T--) cin >> _x[T] >> _y[T];
    
    if(_x[0] == _x[1]) cout << _x[2];
    else if(_x[1] == _x[2]) cout << _x[0];
    else cout << _x[1];

    cout << " ";

    if(_y[0] == _y[1]) cout << _y[2];
    else if(_y[1] == _y[2]) cout << _y[0];
    else cout << _y[1];

    cout << endl;
    
    return 0;
}