#include <cstdio>
#define MAX 1001
int answer[MAX] = {0, 1, 2, };
int main(void){
    for(int i=3; i<MAX; i++){
        answer[i] = (answer[i-1] + answer[i-2])%10007;
    }
    int n;
    scanf("%d", &n);
    printf("%d\n", answer[n]);
    return 0;
}