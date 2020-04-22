#include <iostream>
using namespace std;
int main(void){
    int T, i=0;
    int from = 1, to = 1;
    cin >> T;

    while(to < 1100000000){
        i++;
        if( T >= from && T <= to){
            cout << i << endl;
            break; 
        }
        from = to + 1;
        to = from + 6*i - 1;
    }
    
    return 0;
}