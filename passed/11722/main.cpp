#include <cstdio>
int main(void){
    int n, lgt=0; scanf("%d", &n);
    int array[n] = {0, }, dp[n] = {0, };
    for(int i=0; i<n; i++) { 
        scanf("%d", &array[i]);
        dp[i] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if( array[j] > array[i] && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
        }

        if(dp[i] > lgt) lgt = dp[i];
    }
    printf("%d\n", lgt);
    return 0;
}