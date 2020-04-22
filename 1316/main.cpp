#include <iostream>
#include <string>
using namespace std;
int main(void){
    int T, cnt=0;
    cin >> T;
    for(int i=0; i<T; i++){
        bool isVisited[26] = {false, };
        bool isGroup = true;
        string S;
        cin >> S;
        for(string::iterator it=S.begin(); it != S.end(); it++){
            while( *it == *(it+1) ) it++;
            if(isVisited[*it - 'a']) {isGroup = false; break;}
            isVisited[*it -'a'] = true;
        }
        if(isGroup) cnt++;
    }
    cout << cnt << endl;
    return 0;
}