#include <cstdio>
int max(int a, int b){return a>b ? a : b;}
int main(void){
    int n, answer=0; scanf("%d", &n);
    int array[n], dp[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    dp[0] = array[0]; 
    answer = dp[0];

    for(int i=1; i<n; i++){
        dp[i] = max(dp[i-1]+array[i], array[i]);
        answer = max(answer, dp[i]);
    }
    
    printf("%d\n", answer);
    return 0;
}