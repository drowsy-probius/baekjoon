#include <cstdio>
using namespace std;

void star_by_rule(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int di = i, dj = j, a = 1;
            // 3^k로 나눴을 때 나머지가 1이면 빈칸
            while(di != 0){
                if(di%3 == 1 && dj%3 == 1){
                    printf(" ");
                    a = 0;
                    break;
                }
                di /= 3;
                dj /= 3;
            }

            if(a)
                printf("*");
        }
        printf("\n");
    }
}

void star_by_divide_and_conquer(int x, int y, int size, int n, char* map){
    if(size == 1){
        *(map + x + y*n) = '*';
        return;
    }

    int step = size/3;
    int space = 0;
    for(int i=y; i<y+size; i += step){
        for(int j = x; j<x+size; j += step){
            if(++space == 5){
                continue;
            }
            star_by_divide_and_conquer(j, i, step, n, map);
        }
    }
}

int main(void){
    int n;
    scanf(" %d", &n);
    char map[n*n];
    for(int i=0; i<n*n; i++){
        *(map + i) = ' ';
    }

    star_by_divide_and_conquer(0, 0, n, n, map);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", map[i*n + j]);
        }
        printf("\n");
    }

    return 0;
}

/*
입력
첫째 줄에 N이 주어진다. N은 3의 거듭제곱이다. 즉 어떤 정수 k에 대해 N=3k이며, 이때 1 ≤ k < 8이다.

출력
첫째 줄부터 N번째 줄까지 별을 출력한다.
*/