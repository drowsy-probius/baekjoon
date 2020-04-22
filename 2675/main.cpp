#include <iostream>
#include <string>
using namespace std;
int main(void){
    int T, R;
    cin >> T;
    for(int i=0; i<T; i++){
        string S;
        cin >> R >> S;
        for(string::iterator it=S.begin(); it != S.end(); it++){
            for(int i=0; i<R; i++) cout << *it;
        }
        cout << endl;
    }
    return 0;
}