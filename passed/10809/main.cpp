#include <iostream>
#include <string>
using namespace std;
int main(void){
    string s;
    cin >> s;
    for(char i='a'; i <= 'z'; i++){
        int pos = -1;
        for(int k=0; k<s.length(); k++){
            if( i == s[k] ){
                pos = k;
                break;
            }    
        }
        cout << pos << " ";
    }
    return 0;
}