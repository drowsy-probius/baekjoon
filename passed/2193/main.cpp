#include <cstdio>
int main(void){
    long int dp[2][2] = { {0, 1}, };
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        dp[i%2][0] = dp[(i-1)%2][0] + dp[(i-1)%2][1];
        dp[i%2][1] = dp[(i-1)%2][0]; 
    }
    printf("%ld\n", dp[(n-1)%2][0]+dp[(n-1)%2][1]);
    return 0;
}

/* 
int dp[2][2];
dp[i][0] <- ends with 0
dp[i][1] <- ends with 1

e.g.
dp[i][0] : 100, 10, 10010, 1001000, ...
dp[i][1] : 101, 10001, 101001, ...

dp[i+1][0] += dp[i][0] + dp[i][1] // ...00 or ...10
dp[i+1][1] += dp[i][0]  // ...01 


*/