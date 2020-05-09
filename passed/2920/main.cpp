#include <iostream>
using namespace std;
int main(void){
    int asc[8] = {1, 2, 3, 4, 5, 6, 7, 8},
        desc[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int input[8];
    bool flag = true;
    for(int i=0; i<8; i++) cin >> input[i];

    for(int i=0; i<8; i++) if(asc[i] != input[i]) flag = false;
    if(flag){cout << "ascending" << endl; return 0;}
    
    flag = true;
    for(int i=0; i<8; i++) if(desc[i] != input[i]) flag = false;
    if(flag){cout << "descending" << endl; return 0;}

    cout << "mixed" << endl;
    return 0;
}