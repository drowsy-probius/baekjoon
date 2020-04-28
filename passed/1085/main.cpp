#include <iostream>
using namespace std;
int main(void){
    int x, y, w, h, shortest=1001;
    cin >> x >> y >> w >> h;

    if(x < shortest) shortest = x;
    if(w-x < shortest) shortest = w-x;
    if(y < shortest) shortest = y;
    if(h-y < shortest) shortest = h-y;
    cout << shortest << endl;

    return 0;
}