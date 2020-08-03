#include <cstdio>
int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--) printf(" ");
        for(int j=i; j>0; j--) (i==n-1) ? printf("*") : (j==i) ? printf("*") : printf(" ");

        (i==0 || i==n-1) ? printf("*") : printf(" ");

        for(int j=i; j>0; j--) (i==n-1) ? printf("*") : (j==1) ? printf("*") : printf(" ");
        printf("\n");

    }
    return 0;
}