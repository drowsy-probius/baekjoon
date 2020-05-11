#include <cstdio>
#define MOD 10007

int main(void){
    int dp[2][10] = {0, };
    int n, answer=0;
    scanf("%d", &n);

    for(int i=0; i<10; i++) dp[0][i] = 1;

    for(int i=1; i<n; i++){
        for(int j=0; j<10; j++){
            dp[i%2][j] = 0;
            for(int k=0; k<=j; k++){
                dp[i%2][j] = ( dp[i%2][j] + dp[(i-1)%2][k] ) % MOD;
            }
        }
    }
    
    for(int i=0; i<10; i++) answer = (answer + dp[(n-1)%2][i] ) % MOD;
    printf("%d\n", answer);
    return 0;
}