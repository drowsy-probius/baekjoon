#include <iostream>
#include <string>
using namespace std;
int freq[26] = {0, };
int main(void){
    int largest = 0;
    string S;
    cin >> S;
    for(string::iterator it=S.begin(); it != S.end(); it++){
        if( *it >= 'A' && *it <= 'Z') freq[*it - 'A']++;
        if( *it >= 'a' && *it <= 'z') freq[*it - 'a']++;
    }

    for(int i=0; i<26; i++){
        if( freq[i] > freq[largest] ) largest = i;
    }

    for(int i=0; i<26; i++){
        if(i == largest) continue;
        if( freq[i] == freq[largest]){
            cout << "?" << endl;
            return 0;
        }
    }
    cout << (char)(largest + 'A') << endl;
    return 0;
}