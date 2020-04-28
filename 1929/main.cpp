#include <iostream>
#define MAX 1000001
using namespace std;
bool check[MAX] = {false, };
int main(void){
    ios::sync_with_stdio(false);
    int M, N;
    cin >> M >> N;

    for(int i=2; i*i<=N; i++){
        if(!check[i]){
            int j=2;
            for(int k=j*i; k<=N; k = (++j)*i ){ 
                check[k] = true;
            }
        }
    }
    check[1] = true;



    while(M <= N){
        if(!check[M]) cout << M << endl;

        M++;
    }

    return 0;
}