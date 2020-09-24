#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    vector<pair<int, int>> Activities;
    int last_activity_idx, answer;
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        int s, f;
        cin >> s >> f;
        Activities.push_back(make_pair(s, f));
    }

    sort(Activities.begin(), Activities.end(), [](pair<int,int> a, pair<int,int> b) {
        return a.second == b.second ? a.first < b.first : a.second < b.second;
    });
    /*
    * 끝나는 시간을 기준으로 오름차순으로 정렬하고 
    * 먼저 끝나는 것들부터 선택하면 됨.
    *
    * 첫번째 요소를 고려해야 하는 이유
    * 안하면 80%~90%에서 틀림. 반례: 
    * (3, 4), (2, 3), (2, 2), (1, 2), (0, 1)
    * (0, 1), (1, 2), (2, 2), (2, 3), (3, 4)
    */

    last_activity_idx = 0;
    answer = 1;

    for(int i=1; i<size; i++){
        if( Activities.at(last_activity_idx).second <= Activities.at(i).first ){
            last_activity_idx = i;
            answer++;
        }
    }
    /*
    * 등호가 들어간 이유
    * i가 끝나는 시간이 j의 시작시간하고 같하고 되니까
    */

    cout << answer << '\n';

    return 0;
}


//activity selection problem
/*
입력
첫째 줄에 회의의 수 N(1 ≤ N ≤ 100,000)이 주어진다. 
둘째 줄부터 N+1 줄까지 각 회의의 정보가 주어지는데 이것은 공백을 사이에 두고 회의의 시작시간과 끝나는 시간이 주어진다. 
시작 시간과 끝나는 시간은 231-1보다 작거나 같은 자연수 또는 0이다.

출력
첫째 줄에 최대 사용할 수 있는 회의의 최대 개수를 출력한다.

예제 입력 1 
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14
예제 출력 1 
4
*/