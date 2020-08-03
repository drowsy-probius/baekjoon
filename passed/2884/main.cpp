#include <iostream>
using namespace std;
int main(void){
    int h, m;
    cin >> h >> m;
    if(m < 45){
        h ? h-- : h=23;
        m += 15;
    }else{
        m -= 45;
    }
    cout << h << " " << m;
    return 0;
}