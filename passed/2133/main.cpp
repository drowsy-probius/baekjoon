#include <cstdio>
int main(void){
    int n; scanf("%d", &n);
    if(n%2){
        printf("%d\n",0);
    }else{
        int dp[n/2 + 1] = {1, 3, };
        for(int i=2; i<n/2 + 1; i++){
            dp[i] = dp[i-1]*3;
            
            for(int j=2; i-j>=0; j++){
                dp[i] += dp[i-j]*2;
            }
        }
        
        printf("%d\n", dp[n/2]);
    }
    return 0;
}