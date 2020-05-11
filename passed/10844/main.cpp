#include <cstdio>
#define MOD 1000000000

int dp[2][11] = {0, };

int main(void){
    int n, answer=9;
    scanf("%d", &n);

    for(int i=2; i<11; i++) dp[0][i] = 1;

    for(int i=1; i<n; i++){
        answer = 0;
        for(int j=1; j<11; j++){
            dp[i%2][j] = (dp[(i-1)%2][j-1] + dp[(i-1)%2][j+1])%MOD;
            answer = (answer + dp[i%2][j])%MOD;
        }
    }
    

    printf("%d\n", answer);
    return 0;
}