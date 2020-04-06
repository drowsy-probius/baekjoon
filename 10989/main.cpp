#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);                 // 위에 세개 추가하니까 속도 빨라짐  ???

    int size=0;
    short max=0;
    short arr[10000] = {0, };

    cin >> size;
    for(int i=0; i<size; i++){
        short a;
        cin >> a;
        arr[a-1]++;
        if(a > max) max = a;
    }

    for(short i=0; i<max; i++){
        for(; arr[i]>0; arr[i]--){
            cout << i+1 << " ";
        }
    }


    return 0;
}