#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int width, height;
    int answer=0;
    cin >> height >> width;

    if(height < 2){
        answer = 1;
    }else if(height < 3){
        answer = width < 9 ? (width+1)/2 : 4;
    }else if(width < 7){
        answer = width > 4 ? 4 : width;
    }else{
        answer = width - 6 + 4;
    }

    cout << answer << '\n';

    return 0;
}

/*
* height < 2
* 1 2 3
* o . .

* height < 3
* 1 2 3 4 5 6 7 8 9  
* . . o . . . o . .
* o . . . o . . . x
* points = width < 9 ? (int)(width+1)/2 : 4;

* 4번 이상일 때 base case
* height < 3 && width < 7이면 많아봤자 이동횟수는 3번
* 1 2 3 4 5 6 7 8 9 0 1 2 3 4
* . o . . . . . o . o . o . o
* . . . . o . . . . . . . . .
* o . o . . . o . o . o . o .
* points = width < 7 ? width > 4 ? 4 : width : width - 6 + 4;
*/


/*
입력
첫째 줄에 체스판의 세로 길이 N와 가로 길이 M이 주어진다. N과 M은 2,000,000,000보다 작거나 같은 자연수이다.

출력
병든 나이트가 여행에서 방문할 수 있는 칸의 개수중 최댓값을 출력한다.

예제 입력 1 
100 50
예제 출력 1 
48
예제 입력 2 
1 1
예제 출력 2 
1
예제 입력 3 
17 5
예제 출력 3 
4
예제 입력 4 
2 4
예제 출력 4 
2
*/