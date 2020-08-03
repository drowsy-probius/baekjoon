#include <iostream>
// #include <string> // for first method
#include <cmath>  // for second method
using namespace std;
int figure(int a){
    int count = 0;
    while (a)
    {
        a /= 10;
        count++;
    }
    return count;
}
int main(void){
    /* use string library
    ios::sync_with_stdio(false);
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    cout << stol(a) + stol(c) << '\n';
    */
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    a *= pow(10, figure(b));
    a += b;
    c *= pow(10, figure(d));
    c += d;

    cout << a + c << '\n';
    return 0;
}
/*
문제
네 자연수 A, B, C, D가 주어진다. 이때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오.

두 수 A와 B를 합치는 것은 A의 뒤에 B를 붙이는 것을 의미한다. 즉, 20과 30을 붙이면 2030이 된다.

입력
첫째 줄에 네 자연수 A, B, C, D가 주어진다. (1 ≤ A, B, C, D ≤ 1,000,000)

출력
A와 B를 붙인 수와 C와 D를 붙인 수의 합을 출력한다.

예제 입력 1 복사
10 20 30 40
예제 출력 1 복사
4060
*/