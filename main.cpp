#include <iostream>
using namespace std;
long long int swapped = 0;

void bubble(int *a, int low, int high){
    for(int i=high-1; i>=0; i--){
        for(int j=low; j<i; j++){
            if(a[j] > a[j+1]){
                swapped++;
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}


int main(void){
    long long int n;
    cin >> n;
    int arr[n] = {0, };
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    bubble(arr, 0, n);
    cout << swapped << '\n';

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << ' ';
    // }
}