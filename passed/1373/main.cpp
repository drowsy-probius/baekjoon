#include <cstdio>
#include <stack>
#include <cmath>
using namespace std;
int main(void){
    stack<int> input_buffer, output_buffer;
    int iter=0, sum=0;
    
    while( (iter = getchar() ) != '\n' ){
        input_buffer.push(iter - '0');
    }
    iter = 0;
    while (!input_buffer.empty())
    {
        if(iter==3){
            output_buffer.push(sum);
            sum = 0;
            iter = 0;
        }

        sum += (input_buffer.top() % 10) * pow(2, iter);

        iter++;
        input_buffer.pop();
    }
    output_buffer.push(sum);

    while(!output_buffer.empty()){
        printf("%d", output_buffer.top());
        output_buffer.pop();
    }
    printf("\n");
    return 0;
}
/*
문제
2진수가 주어졌을 때, 8진수로 변환하는 프로그램을 작성하시오.

입력
첫째 줄에 2진수가 주어진다. 주어지는 수의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 주어진 수를 8진수로 변환하여 출력한다.

예제 입력 1 복사
11001100
예제 출력 1 복사
314


110010101101100101011011001010110
110 010 101 101 100 101 011 011 001 010 110

62554533126
*/