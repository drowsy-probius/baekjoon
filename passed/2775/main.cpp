#include <iostream>
using namespace std;
int func(int k, int n){
    if(k==0) return n;
    else if(n==1) return 1;
    else return func(k-1, n) + func(k, n-1);
}

int main(void){
    int T, k, n;
    cin >> T;
    while(T--){
        cin >> k >> n;
        cout << func(k,n) << endl;
    }
    return 0;
}