#include <iostream>
using namespace std;
long long int _fibo[91] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, };

int main(void){
    ios::sync_with_stdio(false);
    for(int i=18; i<91; i++){
        _fibo[i] = _fibo[i-1] + _fibo[i-2];
    }
    int n;
    cin >> n;
    cout << _fibo[n] << endl;
    return 0;
}