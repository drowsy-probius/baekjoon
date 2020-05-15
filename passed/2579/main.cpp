#include <cstdio>
int max(int a, int b){return a>b ? a : b;}
int main(void){
    int n; scanf("%d", &n);
    int array[n], dp[n];
    for(int i=0; i<n; i++)
        scanf("%d", &array[i]);

    dp[0] = array[0];
    dp[1] = dp[0] + array[1];
    dp[2] = max( array[0] + array[2], array[1] + array[2] );

    for(int i=3; i<n; i++){
        dp[i] = max( dp[i-3] + array[i-1] + array[i], dp[i-2] + array[i] );
    }

    printf("%d\n", dp[n-1]);

    return 0;
}