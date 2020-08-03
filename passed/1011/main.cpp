#include <iostream>
using namespace std;

int main(void){
    int T, x, y;
    cin >> T;
    while(T--){
        cin >> x >> y;
        unsigned int n=1;
        while(true){
            if( y-x >= n*n-n+1 && y-x <= n*n) { cout << 2*n-1 << endl; break; }
            if( y-x >= n*n+1 && y-x <= n*(n+1)) { cout << 2*n << endl; break; }
            n++;
        }
    }
    return 0;
}