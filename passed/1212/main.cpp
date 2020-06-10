#include <cstdio>
#include <stack>
using namespace std;
int main(void){
    stack<int> input_buffer, output_buffer;
    int input;
    while ( (input = getchar()) != '\n'){
        input_buffer.push(input - '0');
    }

    while( input_buffer.size() != 1 ){
        int octal = input_buffer.top();

        for (int i = 0; i < 3;i++){
            output_buffer.push(octal % 2);
            octal /= 2;
        }

        input_buffer.pop();
    }
    int octal = input_buffer.top();
    if(octal==0){
        printf("0\n");
        return 0;
    }

    while(octal){
        output_buffer.push(octal % 2);
        octal /= 2;
    }

    while( !output_buffer.empty() ){
        printf("%d", output_buffer.top());
        output_buffer.pop();
    }
    printf("\n");

    return 0;
}
/*
문제
8진수가 주어졌을 때, 2진수로 변환하는 프로그램을 작성하시오.

입력
첫째 줄에 8진수가 주어진다. 주어지는 수의 길이는 333,334을 넘지 않는다.

출력
첫째 줄에 주어진 수를 2진수로 변환하여 출력한다. 수가 0인 경우를 제외하고는 반드시 1로 시작해야 한다.

예제 입력 1 복사
314
예제 출력 1 복사
11 001 100
*/