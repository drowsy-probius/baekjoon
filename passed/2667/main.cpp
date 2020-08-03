#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(int *map, int size, int i, int j)
{
    int sum = *(map + i * size + j);
    *(map + i * size + j) = 0;
    if( sum == 0 ){
        return sum;
    }

    if(i == 0){
        sum += dfs(map, size, i+1, j);
    }
    else if (i == size - 1)
    {
        sum += dfs(map, size, i-1, j);
    }
    else
    {
        sum += dfs(map, size, i+1, j) + dfs(map, size, i-1, j);
    }

    if(j == 0){
        sum += dfs(map, size, i, j+1);
    }
    else if (j == size - 1)
    {
        sum += dfs(map, size, i, j - 1);
    }
    else
    {
        sum += dfs(map, size, i, j + 1) + dfs(map, size, i, j - 1);
    }

    return sum;
}

int main(void)
{
    int n;
    scanf(" %d", &n);
    int map[n][n] = {
        0,
    };
    vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1)
            {
                answer.push_back( dfs((int *)map, n, i, j) );
            }
        }
    }

    sort(answer.begin(), answer.end());
    printf("%d\n", answer.size());
    for (auto it = answer.begin(); it != answer.end(); it++){
        printf("%d\n", *it);
    }

        return 0;
}

/*
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	57954	23035	14742	38.273%

입력
첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

출력
첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.

예제 입력 1 복사
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
예제 출력 1 복사
3
7
8
9
*/