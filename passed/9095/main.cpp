#include <iostream>
using namespace std;
int main(void){
    int num[11] = {1, 1, 2, 4, };
    for(int i=4; i<11; i++){
        num[i] = num[i-1] + num[i-2] + num[i-3];
    }
    
    int T, x;
    cin >> T;
    while(T--){
        cin >> x;
        cout << num[x] << endl;
    }

    return 0;
}