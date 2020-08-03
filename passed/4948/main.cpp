#include <iostream>
#define MAX 250000
using namespace std;
bool prime[MAX] = {false, };
int main(void){
    for(int i=2; i*i<=MAX; i++){
        if(!prime[i]){
            for(int k=i+i; k<=MAX; k+=i){
                prime[k] = true;
            }
        }
    }
    prime[1] = true;
    int N;
    scanf("%d", &N);

    while(N){
        int cnt = 0;
        for(int i=N+1; i<=2*N; i++) if(!prime[i]) cnt++;
        printf("%d\n", cnt);
        scanf("%d", &N);
    }
    return 0;
}