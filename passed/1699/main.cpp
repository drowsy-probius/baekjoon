#include <cstdio>
int min(int a, int b){return a<b ? a : b;}
int main(void){
    int n; scanf("%d", &n);
    int dp[n+1] = {0, };

    for(int i=1; i<=n; i++){
        dp[i] = dp[i-1] + 1;
        for(int j=2; j*j<=i; j++){
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }

    printf("%d\n", dp[n]);
    return 0;
}