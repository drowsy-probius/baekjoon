#include <iostream>
using namespace std;
int main(void){
    long long n, r;
    long long numoftwo = 0, numoffive = 0;
    cin >> n >> r;

    for (long long i = 2; i <= n; i*=2){
        numoftwo += n / i;
    }
    for (long long i = 5; i <= n; i*=5){
        numoffive += n / i;
    }
    for (long long i = 2; i <= r; i *= 2)
    {
        numoftwo -= r / i;
    }
    for (long long i = 5; i <= r; i *= 5)
    {
        numoffive -= r / i;
    }
    for (long long i = 2; i <= n-r; i *= 2)
    {
        numoftwo -= (n-r) / i;
    }
    for (long long i = 5; i <= n-r; i *= 5)
    {
        numoffive -= (n-r) / i;
    }

        numoftwo > numoffive ? cout << numoffive << '\n' : cout << numoftwo << '\n';
    return 0;
}
/*
문제
nCm의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 n, m(0≤m≤n≤2,000,000,000, n!=0)이 들어온다.

출력
첫째 줄에 0의 개수를 출력한다.

예제 입력 1 복사
25 12
예제 출력 1 복사
2
*/