#include <iostream>
#define MAX 1000001
using namespace std;
bool check[MAX] = {false, };
int main(void){
    int M, N;
    scanf("%d %d", &M, &N);

    for(int i=2; i*i<=N; i++){
        if(!check[i]){
            for(int k=i+i; k<=N; k+=i ){ 
                check[k] = true;
            }
        }
    }
    check[1] = true;



    while(M <= N){
        if(!check[M]) printf("%d\n", M);

        M++;
    }

    return 0;
}