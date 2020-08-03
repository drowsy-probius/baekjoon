#include <cstdio>
#include <algorithm>
using namespace std;
int main(void){
    int n, k; scanf("%d %d", &n, &k);
    int array[n];
    for(int i=0; i<n; i++) scanf("%d", &array[i]);

    //sort(array, array+n);

    nth_element(array, array+k-1, array+n);

    printf("%d\n", array[k-1]);
    return 0;
}

/*
문제
수 N개 A1, A2, ..., AN이 주어진다. A를 오름차순 정렬했을 때, 앞에서부터 K번째 있는 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N(1 ≤ N ≤ 5,000,000)과 K (1 ≤ K ≤ N)이 주어진다.

둘째에는 A1, A2, ..., AN이 주어진다. (-109 ≤ Ai ≤ 109)

출력
A를 정렬했을 때, 앞에서부터 K번째 있는 수를 출력한다.

예제 입력 1 복사
5 2
4 1 2 3 5
예제 출력 1 복사
2

분류: quickselect
*/