#include <iostream>
#include <string>
using namespace std;
int main(void){
    int decimal;
    string minusbinary = "";
    cin >> decimal;

    if(decimal == 0)
        minusbinary = "0";
    
    while (decimal)
    {
        if(decimal%(-2)){
            minusbinary = "1" + minusbinary;
            if(decimal < 0){
                decimal = (decimal - 1) / -2;
            }else{
                decimal = decimal / -2;
            }
        }
        else
        {
            minusbinary = "0" + minusbinary;
            decimal = decimal / -2;
        }
        //cout << "current decimal: " << decimal << '\t' <<  minusbinary << '\n';
    }

    cout << minusbinary << '\n';
    return 0;
}
/*
문제
-2진법은 부호 없는 2진수로 표현이 된다. 
2진법에서는 2^0, 2^1, 2^2, 2^3이 표현 되지만 -2진법에서는 (-2)^0 = 1, (-2)^1 = -2, (-2)^2 = 4, (-2)^3 = -8을 표현한다. 
10진수로 1부터 표현하자면 1, 110, 111, 100, 101, 11010, 11011, 11000, 11001 등이다.

10진법의 수를 입력 받아서 -2진수를 출력하는 프로그램을 작성하시오.

입력
첫 줄에 10진법으로 표현된 수 N(-2,000,000,000≤N≤2,000,000,000)이 주어진다.

출력
-2진법 수를 출력한다.

예제 입력 1 복사
-13
예제 출력 1 복사
110111
*/