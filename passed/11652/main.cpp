#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int n; cin >> n;
    map<long long, int> list;
    vector< pair<long long, int> > data;

    for(int i=0; i<n; i++){
        long long tmp;
        cin >> tmp;
        if(list.find(tmp) == list.end()){
            list.insert( make_pair(tmp, 1) );
        }else{
            (list.find(tmp)->second)++;
        }
    }

    for( auto it = list.begin(); it!=list.end(); it++){
        data.emplace_back( make_pair(it->first, it->second) );
    }

    sort(data.begin(), data.end(), [](pair<long long, int> a, pair<long long, int> b){
        if(a.second == b.second) return a.first < b.first;
        else return a.second > b.second; });

    cout << data[0].first << '\n';

    return 0;
}
/*

map구조가 자동으로 정렬된다고 배웠고 map구조를 그대로 vector에 복사하고 sort하면 stable한 상태인줄 알고 compare함수를 잘못작성함.
sort의 compare함수에서 
[](pair<long long, int> a, pair<long long, int> b){return a.second > b.second; } 으로 처음에 작성하고 틀림

sort을 stable_sort로 바꾸던가 compare 함수를 바꿔서 성공


4611686018427387904
문제
준규는 숫자 카드 N장을 가지고 있다. 숫자 카드에는 정수가 하나 적혀있는데, 적혀있는 수는 -262보다 크거나 같고, 262보다 작거나 같다.

준규가 가지고 있는 카드가 주어졌을 때, 가장 많이 가지고 있는 정수를 구하는 프로그램을 작성하시오. 만약, 가장 많이 가지고 있는 정수가 여러 가지라면, 작은 것을 출력한다.

입력
첫째 줄에 준규가 가지고 있는 숫자 카드의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개 줄에는 숫자 카드에 적혀있는 정수가 주어진다.

출력
첫째 줄에 준규가 가장 많이 가지고 있는 정수를 출력한다.

예제 입력 1 복사
5
1
2
1
2
1
예제 출력 1 복사
1
예제 입력 2 복사
6
1
2
1
2
1
2
예제 출력 2 복사
1
*/