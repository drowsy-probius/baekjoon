#include <iostream>
using namespace std;
int main(void){
    int cnt=0, T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        for(int i=2; i*i<=x; i++){
            if(x%i == 0){
                cnt--; break;
            }
        }
        if(x == 1) cnt--;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}