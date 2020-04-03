#include <iostream>
int decomSum(int n){
    int k = n;
    while(n>9){
        k += n%10;
        n /= 10;
    }
    return k+n;
}

int main(void){
    int n=0,i=0,ans=0;
    std::cin >> n;

    for(i=1; i<n; i++){
        if(decomSum(i) == n){
            ans=i;
            break;
        }
    }
    std::cout << ans;
    return 0;
}