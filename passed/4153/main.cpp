#include <iostream>
using namespace std;
int main(void){
    int A, B, C;
    cin >> A >> B >> C;
    while(A||B||C){
        if(A>B && A>C){
            printf("%s\n", A*A == B*B+C*C ? "right" : "wrong" );
        }else if(B>A && B>C){
            printf("%s\n", B*B == A*A+C*C ? "right" : "wrong" );
        }else{
            printf("%s\n", C*C == B*B+A*A ? "right" : "wrong" );
        }
        cin >> A >> B >> C;
    }
    return 0;
}