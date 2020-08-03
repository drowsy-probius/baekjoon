#include <iostream>
#include <math.h>
using namespace std;

/*
거리를 시간에 대한 함수(t is 0 to 1)로 나타내서
극점의 시간 좌표를 찾아서 
직접 계산

아니면 ternary search방식 참고:
lo, p, q, hi로 나누어서
f(p) > f(q):
  lo = p
else:
  hi = q
로 어느정도 lo하고 hi간격을 좁히고
그 안에서 최소값 찾기
*/

inline double dis(double ax, double ay, double bx, double by){
    return sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );
}

int main(void){
    int ax, ay, bx, by, cx, cy, dx, dy;
    scanf(" %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);

    long double time = (ax-cx)*(dx-cx-bx+ax) + (ay-cy)*(dy-cy-by+ay);
    time /= (dx-cx-bx+ax)*(dx-cx-bx+ax) + (dy-cy-by+ay)*(dy-cy-by+ay);

    if( isnan(time) || time < 0){
        printf("%.10f\n", dis(ax, ay, cx, cy) );
    }
    else if(time > 1)
    {
        printf("%.10f\n", dis(bx, by, dx, dy) );
    }
    else
    {
        printf("%.10f\n", dis(ax+ (bx-ax)*time, ay+(by-ay)*time, cx+(dx-cx)*time, cy+(dy-cy)*time));
    }

    return 0;
}
/*
입력
첫째 줄에 Ax, Ay, Bx, By, Cx, Cy, Dx, Dy가 주어진다. 
입력으로 주어지는 모든 좌표는 0보다 크거나 같고, 10000보다 작거나 같은 정수이다.

출력
민호와 강호가 가장 가까웠을 때의 거리를 출력한다. 
절대/상대 오차는 10-6까지 허용한다.

예제 입력 1 
0 0 1 1 2 2 3 3
예제 출력 1 
2.8284271247
예제 입력 2 
0 0 1 1 1 0 0 1
예제 출력 2 
0.0000000000
예제 입력 3 
0 0 10 20 30 0 5 10
예제 출력 3 
8.2416338387
예제 입력 4 
5 5 10 10 7 2 20 30
예제 출력 4 
2.8745554697
*/