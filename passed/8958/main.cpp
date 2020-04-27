#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int size, score=0, count=0;
    cin >> size;
    getchar();
    for(int i=0; i<size; i++){
        char c;
        while( ( c=getchar() ) != '\n' ){
            if(c == 'O'){
                score += ++count;
            }else{
                count = 0;
            }
        }
        cout << score << endl;
        score = 0; count = 0;
    }

    return 0;
}