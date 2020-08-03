#include <cstdio>
int main(void){
    long int dp[100] = {1, 1, 1, 2, 2, };
    for(int i=5; i<100; i++) dp[i] = dp[i-5] + dp[i-1];
    int T; scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);

        printf("%ld\n", dp[n-1]);
    }
    return 0;
}