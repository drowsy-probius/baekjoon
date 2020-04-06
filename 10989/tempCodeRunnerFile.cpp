#include <iostream>
using namespace std;

int main(void){
    int size=0;
    int arr[10000] = {0, };

    cin >> size;
    for(int i=0; i<size; i++){
        int a;
        cin >> a;
        arr[a-1]++;
    }

    for(int i=0; i<10000; i++){
        for(; arr[i]>0; arr[i]--){
            cout << i+1 << " ";
        }
    }


    return 0;
}