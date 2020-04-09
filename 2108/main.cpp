#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define MAX 8001
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    int size=0, ans=0;
    cin >> size;
    vector<int> arr(size);

    //mean
    for(int i=0; i<size; i++) {cin >> arr[i]; ans += arr[i];}
    cout << round((double)ans/size) << "\n";    

    //median
    sort(arr.begin(), arr.end(), [](int a, int b){return a<b;});
    if(size%2) cout << arr[floor(size/2)];
    else cout << (arr[size/2-1] + arr[size/2])/2;
    cout << "\n";

    // mode

    

    
    //range
    if(size>1) cout << arr[size-1] - arr[0];
    else cout << 0;

    return 0;
}