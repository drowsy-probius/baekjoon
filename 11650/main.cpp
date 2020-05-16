#include <cstdio>

void swap(int a[2], int b[2]){
    int x=a[0],     y=a[1];
    a[0] = b[0];    a[1] = b[1];
    b[0] = x;       b[1] = y;
}

void quick(int a[][2], int start, int end){
    if( start >= end) return;

    int pivot=start, low=end-1, high=end;
    for(; low>start; low--){
        if( a[low][0] > a[pivot][0]){
            swap( a[low], a[--high]);
        }else if(a[low][0] == a[pivot][0] && a[low][1] > a[pivot][1]){
            swap( a[low], a[--high]);
        }
    }
    swap( a[--high], a[pivot] );

    quick(a, start, high);
    quick(a, high+1, end);
}

/*  failed code
void quick(int a[][2], int start, int end){
    if( start >= end) return;

    int pivot=start, low=end-1, high=end;
    for(; low>start; low--){
        if( a[low][0] > a[pivot][0]){
            swap( a[low], a[--high]);
        }else if(a[low][0] == a[pivot][0] && a[low][1] > a[pivot][1]){
            swap( a[low], a[--high]);
        }
    }
    swap( a[--high], a[pivot] );

    quick(a, start, high);
    quick(a, high+1, end);
}

AC code
void quick(int a[][2], int start, int end){
    if( start >= end) return;

    int pivot=start, low=end-1, high=end;
    for(; low>start; low--){
        if( a[low][0] > a[pivot][0]){
            swap( a[low], a[--high]);
        }else if(a[low][0] == a[pivot][0] && a[low][1] > a[pivot][1]){
            swap( a[low], a[--high]);
        }
    }
    swap( a[--high], a[pivot] );

    quick(a, start, high+1);
    quick(a, high+1, end);
}
*/


int main(void){
    int n; scanf("%d", &n);
    int ar[n][2] = {0, };
    for(int i=0; i<n; i++)
        scanf("%d %d", &ar[i][0], &ar[i][1]);

    quick( ar, 0, n);

    for(int i=0; i<n; i++)
        printf("%d %d\n", ar[i][0], ar[i][1]);
    return 0;
}


/* 
문제
2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.

출력
첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.

예제 입력 1 복사
5
3 4
1 1
1 -1
2 2
3 3
예제 출력 1 복사
1 -1
1 1
2 2
3 3
3 4
*/