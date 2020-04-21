#include <iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    int x;
    cin >> x;

    for(int i=0; i<x; i++){
        for(int a=0; a<x; a++){
            if(a%2) cout << " ";
            else cout << "*";
        }
        cout << endl;
        for(int b=0; b<x; b++){
            if(b%2) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}