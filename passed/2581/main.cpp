#include <iostream>
using namespace std;

int isprime(int n){
    if(n==1) return 0;
    else if(n==2 || n==3 || n==5 || n==7) return 1;
    else if(n%2 == 0) return 0;
    else if(n%3 == 0) return 0;
    else if(n%5 == 0) return 0;
    else for(int i=7; i*i<=n; i++){
        if( n%i == 0) return 0;
    }
    return 1;
}

int main(void){
    int M, N;
    int sum = -1, smallest = -1;
    cin >> M >> N;

    while( N >= M){
        if(isprime(N)){
            sum += N;
            smallest = N;
        }
        N--; 
    }
    if(sum != -1) cout << sum+1 << endl;
    else cout << sum << endl;
    if(smallest != -1) cout << smallest << endl;

    return 0;
}