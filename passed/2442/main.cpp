#include <cstdio>
int main(void){
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        for(int j=N-i-1; j>0; j--) printf(" ");
        for(int j=i; j>0; j--) printf("*");
        printf("*");
        for(int j=i; j>0; j--) printf("*");
        for(int j=N-i-1; j>0; j--) printf(" ");
        printf("\n");
    }
    return 0;
}