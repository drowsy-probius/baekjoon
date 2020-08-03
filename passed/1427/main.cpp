#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    char arr[11] = {-1, };
    cin >> arr;

    sort(arr, arr+11, [](char a, char b){return a>b;});

    for(int i=0; i<11; i++){
        if(arr[i] != -1) cout << arr[i];
    }

    return 0;
}