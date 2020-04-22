#include <iostream>
#include <string>
using namespace std;
int alp2num(char a){
    if( a>='A' && a<='C') return 2;
    else if( a>= 'D' && a<='F') return 3;
    else if( a>='G' && a<='I') return 4;
    else if(a>='J' && a<='L') return 5;
    else if(a>='M' && a<='O') return 6;
    else if(a>='P' && a<='S') return 7;
    else if(a>='T' && a<='V') return 8;
    else return 9;
}
int main(void){
    string S;
    int ans=0;
    cin >> S;
    for(string::iterator it=S.begin(); it != S.end(); it++) ans += alp2num(*it) + 1;
    cout << ans << endl;
    return 0;
}