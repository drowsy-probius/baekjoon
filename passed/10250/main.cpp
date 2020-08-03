#include <iostream>
using namespace std;
int main(void){
    int T, H, W, N;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> H >> W >> N;
        N--;

        cout << N%H + 1;
        if(N/H < 9) cout << 0 << N/H+1;
        else cout << N/H+1;
        cout << endl;
    }
    return 0;
}