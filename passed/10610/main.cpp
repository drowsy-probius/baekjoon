#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    vector<char> n;
    int sum_of_digit = 0;
    char tmp;

    while(true){
        tmp = getc(stdin);
        if(tmp < '0' || tmp > '9')
            break;

        n.push_back(tmp);
    }

    for(auto it = n.begin(); it != n.end(); it++){
        sum_of_digit += (*it - '0');
    }

    if(sum_of_digit%3 != 0){
        cout << -1 << '\n';
        return 0;
    }

    sort(n.begin(), n.end(), [](char a, char b)->bool { return a > b; });

    if(n.back() != '0'){
        cout << -1 << '\n';
        return 0;
    }

    for(auto it = n.begin(); it != n.end(); it++){
        cout << *it;
    }
    cout << '\n';

    return 0;
}

/*
문제
어느 날, 미르코는 우연히 길거리에서 양수 N을 보았다. 
미르코는 30이란 수를 존경하기 때문에, 그는 길거리에서 찾은 수에 포함된 숫자들을 섞어 30의 배수가 되는 가장 큰 수를 만들고 싶어한다.

미르코를 도와 그가 만들고 싶어하는 수를 계산하는 프로그램을 작성하라.

입력
N을 입력받는다. N는 최대 10^5개의 숫자로 구성되어 있으며, 0으로 시작하지 않는다.

출력
미르코가 만들고 싶어하는 수가 존재한다면 그 수를 출력하라. 그 수가 존재하지 않는다면, -1을 출력하라.

예제 입력 1 복사
30
예제 출력 1 복사
30
예제 입력 2 복사
102
예제 출력 2 복사
210
예제 입력 3 복사
2931
예제 출력 3 복사
-1
예제 입력 4 복사
80875542
예제 출력 4 복사
88755420
*/