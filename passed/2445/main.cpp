#include <cstdio>
int main(void){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--) printf("*");
        for(int j=n-i; j>0; j--) printf(" ");
        for(int j=n-i; j>0; j--) printf(" ");
        for(int j=i; j>0; j--) printf("*");
        printf("\n");
    }
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>0; j--) printf("*");
        for(int j=n-i; j>0; j--) printf(" ");
        for(int j=n-i; j>0; j--) printf(" ");
        for(int j=i; j>0; j--) printf("*");
        printf("\n");
    }
    return 0;
}