#include <cstdio>
#include <cmath>

void base(int x, int y, int width, char* arr){
    *(arr + y*width + x+2) = '*';

    *(arr + (y+1)*width + x+1) = '*';
    *(arr + (y+1)*width + x+3) = '*';
    
    for(int i=0; i<5; i++){
        *(arr + (y+2)*width + x+i) = '*';
    }
}

void draw_by_rule(int N, int width, char* arr){
    int point = (width/2) - 2 < 0 ? 0 : (width/2) - 2;
    for(int i=0; i<N; i += 3, point -= 3){
        int x = point;
        while(x+4 < width){
            base(x, i, width, arr);
            x += 6;
        }
    }
}

void draw_by_divide_and_conquer(int x, int y, int size, char *arr){

}

int main(void){
    int N;
    scanf(" %d", &N);
    int k = log(N/3) / log(2);
    int width = 6 * pow(2, k) - 1;

    char arr[N*width];
    for(int i=0; i<N*width; i++){
        *(arr + i) = ' ';
    }

    draw_by_rule(N, width, arr);


    for(int i=0; i<N; i++){
        for(int j=0; j<width; j++){
            printf("%c", *(arr + i*width + j));
        }
        printf("\n");
    }


    return 0;
}

/*
배열 크기
세로 = N = 3 * 2^k
가로 = 5*2^k + 2^k - 1

입력
첫째 줄에 N이 주어진다. N은 항상 3×2k 수이다. (3, 6, 12, 24, 48, ...) (k ≤ 10)

출력
첫째 줄부터 N번째 줄까지 별을 출력한다.

*/