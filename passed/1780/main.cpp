#include <iostream>
using namespace std;
int answer[3] = {0, 0, 0};

void check(int *arr, int ax, int ay, int bx, int by, int size){
    if(ax == bx && ay == by){
        answer[1 + *(arr + ax*size + ay)]++;
        return;
    }

    int tmp = *(arr + ax*size + ay);
    for(int i=ax; i<bx; i++){
        for(int j=ay; j<by; j++){
            if( *(arr + i*size + j) != tmp ){
                check(arr, ax,              ay,             (bx-ax)/3 + ax,     (by-ay)/3+ay, size);
                check(arr, (bx-ax)/3 + ax,  ay,             (bx-ax)*2/3+ax,     (by-ay)/3+ay, size);
                check(arr, (bx-ax)*2/3+ax,  ay,             bx,                 (by-ay)/3+ay, size);

                check(arr, ax,              (by-ay)/3+ay,   (bx-ax)/3 + ax,     (by-ay)*2/3+ay, size);
                check(arr, (bx-ax)/3 + ax,  (by-ay)/3+ay,   (bx-ax)*2/3 + ax,   (by-ay)*2/3+ay, size);
                check(arr, (bx-ax)*2/3+ax,  (by-ay)/3+ay,   bx,                 (by-ay)*2/3+ay, size);

                check(arr, ax,              (by-ay)*2/3+ay, (bx-ax)/3 + ax,     by, size);
                check(arr, (bx-ax)/3 + ax,  (by-ay)*2/3+ay, (bx-ax)*2/3 + ax,   by, size);
                check(arr, (bx-ax)*2/3+ax,  (by-ay)*2/3+ay, bx,                 by, size);
                return;
            }
        }
    }

    answer[1+tmp]++;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n;
    cin >> n;
    int paper[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> paper[i][j];
        }
    }

    check((int *)paper, 0, 0, n, n, n);

    for(int i=0; i<3; i++){
        cout << answer[i] << '\n';
    }

    return 0;
}
/*
문제
N×N크기의 행렬로 표현되는 종이가 있다. 
종이의 각 칸에는 -1, 0, 1의 세 값 중 하나가 저장되어 있다. 
우리는 이 행렬을 적절한 크기로 자르려고 하는데, 이때 다음의 규칙에 따라 자르려고 한다.

만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
(1)이 아닌 경우에는 종이를 같은 크기의 9개의 종이로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.

입력
첫째 줄에 N(1≤N≤3^7, N은 3^k 꼴)이 주어진다. 다음 N개의 줄에는 N개의 정수로 행렬이 주어진다.

출력
첫째 줄에 -1로만 채워진 종이의 개수를, 둘째 줄에 0으로만 채워진 종이의 개수를, 셋째 줄에 1로만 채워진 종이의 개수를 출력한다.

예제 입력 1 
9
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
0 1 -1 0 1 -1 0 1 -1
0 -1 1 0 1 -1 0 1 -1
0 1 -1 1 0 -1 0 1 -1
예제 출력 1 
10
12
11
*/