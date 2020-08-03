#include <cstdio>
int main(void)
{
    int n, divisor = 2;
    scanf(" %d", &n);
    while(n != 1){
        if(n%divisor == 0){
            printf("%d\n", divisor);
            n /= divisor;
        }else{
            divisor++;
        }
    }
    return 0;
}
/*
문제
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

출력
N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다.

예제 입력 1 복사
72
예제 출력 1 복사
2
2
2
3
3
*/