#include <iostream>
#define MAX 1000001
using namespace std;
int ans[MAX] = {0, 0, 1, 1, 0, };
int main(void){
    for(int i=4; i<MAX; i++){
        ans[i] = ans[i-1] + 1;
        if(i%2 == 0) ans[i] = ans[i] < ans[i/2]+1 ? ans[i] : ans[i/2] + 1;
        if(i%3 == 0) ans[i] = ans[i] < ans[i/3]+1 ? ans[i] : ans[i/3] + 1;
    }

    int x;
    cin >> x;
    cout << ans[x] << endl;

    return 0;
}