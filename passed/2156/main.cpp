#include <cstdio>
int max(int a, int b){return a>b ? a : b;}
int main(void){
    int n;
    scanf("%d", &n);
    int array[n+3] = {0, },
        dp[n+3] = {0, };
    
    for(int i=3; i<n+3; i++) scanf("%d", &array[i]);

    for(int i=3; i<n+3; i++){
        dp[i] = max( dp[i-2] + array[i], dp[i-3] + array[i-1] + array[i]);
        dp[i] = max( dp[i-1], dp[i] );
    }

    printf("%d\n", dp[n+2]);
    return 0;
}