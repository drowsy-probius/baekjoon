#include <cstdio>
int main(void){
    char input[100001];
    int bar = 0, answer = 0;
    scanf("%100000s", input);
    for(int i=0; i<100000 && input[i] != '\0'; i++){
        if(input[i] == '(' ){
            if(input[i+1] == ')' ){
                i++;
                answer += bar;
            }else{
                bar++;
            }
        }else{
            bar--;
            answer++;
        }
    }
    printf("%d\n", answer);
    return 0;
}

/*
입력
한 줄에 쇠막대기와 레이저의 배치를 나타내는 괄호 표현이 공백없이 주어진다. 괄호 문자의 개수는 최대 100,000이다. 

출력
잘려진 조각의 총 개수를 나타내는 정수를 한 줄에 출력한다.

예제 입력 1 복사
()(((()())(())()))(())
예제 출력 1 복사
17
예제 입력 2 복사
(((()(()()))(())()))(()())
예제 출력 2 복사
24
*/