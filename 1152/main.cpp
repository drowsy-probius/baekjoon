#include <iostream>
#include <string>
using namespace std;
int main(void){
    int cnt = 0;
    string S;
    getline(cin, S);

    for( string::iterator it=S.begin(); it != S.end(); it++) if( *it == ' ' ) cnt++;

    if( S.front() == ' ' ) cnt--;
    if( S.back() == ' ' ) cnt--;

    cnt++;
    
    cout << cnt << endl;
    return 0;
}