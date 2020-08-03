#include <cstdio>
#define MOD 1000000000
int main(void){
    long int dp[201][201] = {0, };   // dp[n][k] = c
    int n, k; scanf("%d %d", &n, &k);

    for(int i=0; i<=k; i++) dp[0][i] = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            for(int l=0; l<=i; l++){
                dp[i][j] = (dp[i][j] + dp[l][j-1])%MOD;
            }
        }
    }

    printf("%ld\n", dp[n][k]);
    
    return 0;
}