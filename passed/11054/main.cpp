#include <cstdio>
int main(void){
    int n, max=0; scanf("%d", &n);
    int array[n], dp[n], dp2[n], sum[n];
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
        dp[i] = 1; dp2[i] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if( array[j] < array[i] && dp[i] < dp[j] + 1 ) dp[i] = dp[j] + 1;
        }
    }
    
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>i; j--){
            if( array[j] < array[i] && dp2[i] < dp2[j] + 1 ) dp2[i] = dp2[j] + 1;
        }
    }

    for(int i=0; i<n; i++){
        sum[i] = dp[i] + dp2[i];
        if(sum[i] > max) max = sum[i];
    }


    printf("%d\n", max-1);    
    return 0;
}

/* 
10
1 5 2 1 4 3 4 5 2 1
*/