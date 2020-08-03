#include <iostream>
using namespace std;
int zero[41] = {1, 0, };
int one[41] = {0, 1, };
int main(void){
    for(int i=2; i<41; i++){
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        cout << zero[n] << " " << one[n] << endl;
    }
    return 0;
}