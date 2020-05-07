#include <iostream>
#include <string>
using namespace std;
int doom[10001] = {0, };
int main(void){
    int idx=1;
        for(int i=666; idx!=10001; i++){
        string::size_type n;
        n = to_string(i).find("666");
        if(n != string::npos){
            doom[idx++] = i;
        }
    }
    
    int n;
    cin >> n;
    cout << doom[n] << endl;

    return 0;
}