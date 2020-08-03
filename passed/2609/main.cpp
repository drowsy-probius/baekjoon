#include <iostream>
using namespace std;
int gcd(int a, int b){
    int c;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main(void){
    int a, b, gcd_value;
    cin >> a >> b;

    gcd_value = gcd(a, b);

    cout << gcd_value << '\n';

    cout << a * b / gcd_value << '\n';

    return 0;
}
/*
문제
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

출력
첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.

예제 입력 1 복사
24 18
예제 출력 1 복사
6
72
*/