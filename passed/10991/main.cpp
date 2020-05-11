#include <cstdio>
int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--) printf(" ");

        for(int j=i; j>0; j--) i%2 ? j%2 ? printf("*") : printf(" ") : j%2 ? printf(" ") : printf("*");

        i%2 ? printf(" ") : printf("*");

        for(int j=i; j>0; j--) j%2 ? printf("*") : printf(" ");
        
        printf("\n");
    }
    return 0;
}