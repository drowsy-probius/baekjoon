#include <cstdio>
int main(void){
    int n, lgt=0; scanf("%d", &n);
    int array[n] = {0, }, dp[n] = {0, };

    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
        dp[i] = array[i];
    }

    for(int i=0; i<n; i++){
        lgt=0;
        for(int j=0; j<i; j++){
            if( array[i] > array[j] && dp[j] > lgt ) lgt = dp[j];
        }
        dp[i] += lgt;
    }

    lgt=0;
    for(int i=0; i<n; i++){
        if(dp[i] > lgt) lgt = dp[i];
    }
    printf("%d\n", lgt);
    return 0;
}