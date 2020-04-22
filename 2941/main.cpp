#include <iostream>
#include <string>
using namespace std;
int main(void){
    string S;
    int cnt = 0;
    cin >> S;
    for(string::iterator it=S.begin(); it != S.end(); it++){
        if( *it == 'c' && ( *(it+1) == '=' || *(it+1) == '-') ) it++;
        else if( *it == 'd' && *(it+1) == 'z' && *(it+2) == '=' ) it += 2;
        else if( *it == 'd' && *(it+1) == '-' ) it++;
        else if( (*it == 'l' || *it == 'n') && *(it+1) == 'j' ) it++;
        else if( (*it == 's' || *it == 'z') && *(it+1) == '=' ) it++;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}