#include <iostream>
#define MAX 1000001
using namespace std;
int num[MAX] = {0, 1, 2, 3, 5, };
int main(void){
    for(int i=5; i<MAX; i++) num[i] = (num[i-1] + num[i-2])%15746;
    int n;
    cin >> n;
    cout << num[n] << endl;
    return 0;
}

/*
S -> 00S | 1S
*/