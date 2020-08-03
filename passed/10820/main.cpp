#include <cstdio>
int main(void){
    char input[101];
    int answer[4] = {
        0,
    };

    while (fgets(input, sizeof(input), stdin) != NULL) {    // getline(cin, input) != NULL
        for (int i = 0; i < 100 && input[i] != '\0'; i++)
        {
            if (input[i] == '\n')
            {
                for (int i = 0; i < 4; i++)
                {
                    printf("%d ", answer[i]);
                    answer[i] = 0;
                }
            }
            else if (input[i] >= 'a' && input[i] <= 'z')
                answer[0]++;
            else if (input[i] >= 'A' && input[i] <= 'Z')
                answer[1]++;
            else if (input[i] >= '0' && input[i] <= '9')
                answer[2]++;
            else if (input[i] == ' ' || input[i] == '\t')
                answer[3]++;
        }
    }

    return 0;
}
/*
문제
문자열 N개가 주어진다. 이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.

각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.

입력
첫째 줄부터 N번째 줄까지 문자열이 주어진다. (1 ≤ N ≤ 100) 문자열의 길이는 100을 넘지 않는다.

출력
첫째 줄부터 N번째 줄까지 각각의 문자열에 대해서 소문자, 대문자, 숫자, 공백의 개수를 공백으로 구분해 출력한다.

예제 입력 1 복사
This is String
SPACE    1    SPACE
 S a M p L e I n P u T     
0L1A2S3T4L5I6N7E8
예제 출력 1 복사
10 2 0 2
0 10 1 8
5 6 0 16
0 8 9 0
*/