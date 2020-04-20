#include <iostream>
using namespace std;
int main(void){
    int sum=0;
    for(int i=0; i<5; i++){
        int x;
        cin >> x;
        if(x < 40) sum += 40;
        else sum += x;
    }
    cout << sum/5 << endl;
    return 0;
}