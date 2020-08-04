#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(int a, int b){return a>b;}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL), cin.tie(NULL);
    int n, m, t;
    cin >> n >> m;
    vector <int> answer;
    for(int i=0;i<n+m;i++){
        cin >> t;
        answer.push_back(t);
    }
    sort(answer.begin(), answer.end(), comp);

    for(int i=0; i<n+m; i++){
        cout << answer.back() << " ";
        answer.pop_back();
    }
    cout << "\n";

    return 0;
}
/*
입력
첫째 줄에 배열 A의 크기 N, 배열 B의 크기 M이 주어진다. (1 ≤ N, M ≤ 1,000,000)

둘째 줄에는 배열 A의 내용이, 셋째 줄에는 배열 B의 내용이 주어진다. 
배열에 들어있는 수는 절댓값이 109보다 작거나 같은 정수이다.

출력
첫째 줄에 두 배열을 합친 후 정렬한 결과를 출력한다.

예제 입력 1 
2 2
3 5
2 9
예제 출력 1 
2 3 5 9
예제 입력 2 
2 1
4 7
1
예제 출력 2 
1 4 7
예제 입력 3 
4 3
2 3 5 9
1 4 7
예제 출력 3 
1 2 3 4 5 7 9
*/