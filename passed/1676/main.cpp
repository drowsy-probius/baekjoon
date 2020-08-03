#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int numoftwo = 0, numoffive = 0;
    cin >> n;

    for (int i = n; i>0; i--){
        for (int j = i; j % 2 == 0;j/=2,numoftwo++);
        for (int j = i; j % 5 == 0; j /= 5, numoffive++);
    }

    numoftwo > numoffive ? cout << numoffive << '\n' : cout << numoftwo << '\n';

    return 0;
}
/*
문제
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)

출력
첫째 줄에 구한 0의 개수를 출력한다.

예제 입력 1 복사
10
예제 출력 1 복사
2
*/