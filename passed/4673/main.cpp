#include <iostream>
using namespace std;

bool ans[10001] = {false, };

int func(int n){
    if(n<10) return n;
    return n%10 + func(n/10);
}

int d(int n){
    return n + func(n);
}

int main(void){
    for(int i=1; i<10001; i++) ans[d(i)] = true;
    for(int i=1; i<10001; i++) if(!ans[i]) cout << i << endl;
    return 0;
}