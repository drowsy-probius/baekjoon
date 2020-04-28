#include <iostream>
#define MAX 10001
using namespace std;
bool prime[MAX] = {false, };
int main(void){
    for(int i=2; i*i<=MAX; i++){
        if(!prime[i]){
            for(int k=i+i; k<=MAX; k+=i) prime[k] = true;
        }
    }
    prime[1] = true;

    int T;
    scanf("%d", &T);
    while(T--){
        int N, first, end;
        scanf("%d", &N);
        first = end = N/2;
        while(prime[first] || prime[end]){
            first--; end++;
        }
        printf("%d %d\n", first, end);
    }
    return 0;
}