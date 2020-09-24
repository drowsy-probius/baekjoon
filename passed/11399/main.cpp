#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    int persons[n];
    int answer;
    for(int i=0; i<n; i++){
        cin >> persons[i];
    }

    sort(persons, persons + n);

    answer = persons[0];

    for(int i=1; i<n; i++){
        persons[i] += persons[i - 1];   // dynamic programming
        answer += persons[i];
    }

    cout << answer << '\n';

    return 0;
}

/*
입력
첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 
둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)

출력
첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다.

예제 입력 1 
5
3 1 4 3 2
예제 출력 1 
32
*/