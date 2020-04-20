#include <iostream>
using namespace std;
int main(void){
    int x, y;
    while(true){
        cin >> x >> y;
        if( !x&&!y ) break;
        cout << x+y << "\n";
    }
    return 0;
}