#include <cstdio>
int stamp[2][100003] = {0, };
int max(int a, int b){return a>b ? a : b;}
int main(void){
    int T;
    scanf("%d", &T);
    while(T--){
        int w;
        scanf("%d", &w);
        
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                stamp[i][j] = 0;

        for(int i=0; i<2; i++)
            for(int j=2; j<w+2; j++)
                scanf("%d", &stamp[i][j]);

        for(int j=2; j<w+2; j++)
            for(int i=0; i<2; i++)
                stamp[i][j] += max(stamp[(i+1)%2][j-1], stamp[(i+1)%2][j-2]);
        
        printf("%d\n", max(stamp[0][w+1], stamp[1][w+1]));
    }
    return 0;
}