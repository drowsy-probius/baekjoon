#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
  int dh[4] = {-1, 0, 0, 1};
  int dw[4] = {0, -1, 1, 0};

  int h, w;
  int answer = -1;
  cin >> w >> h;
  int tomatos[h][w];
  queue<pair<int, int>> q;

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> tomatos[i][j];
      if (tomatos[i][j] == 1)
      {
        q.push(make_pair(i, j));
      }

    }
  }

  while (!q.empty())
  {
    pair<int, int> _point = q.front();
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nh = _point.first + dh[i];
      int nw = _point.second + dw[i];

      if (nh < 0 || nh >= h || nw < 0 || nw >= w)
      {
        continue;
      }

      if (tomatos[nh][nw] == 0)
      {
        tomatos[nh][nw] = tomatos[_point.first][_point.second] + 1;
        q.push(make_pair(nh, nw));
      }
    }

  }


  for (int i = 0;i<h;i++){
    for(int j=0; j<w; j++){
      if(tomatos[i][j] == 0){
        cout << -1 << '\n';
        return 0;
      }
      answer = max(answer, tomatos[i][j]);
    }
  }
    cout << answer-1 << '\n';

  return 0;
}

/*
입력
첫 줄에는 상자의 크기를 나타내는 두 정수 M,N이 주어진다. 
M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수를 나타낸다. 단, 2 ≤ M,N ≤ 1,000 이다. 
둘째 줄부터는 하나의 상자에 저장된 토마토들의 정보가 주어진다. 즉, 둘째 줄부터 N개의 줄에는 상자에 담긴 토마토의 정보가 주어진다. 
하나의 줄에는 상자 가로줄에 들어있는 토마토의 상태가 M개의 정수로 주어진다. 
정수 1은 익은 토마토, 정수 0은 익지 않은 토마토, 정수 -1은 토마토가 들어있지 않은 칸을 나타낸다. 

출력
여러분은 토마토가 모두 익을 때까지의 최소 날짜를 출력해야 한다. 만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야 하고, 토마토가 모두 익지는 못하는 상황이면 -1을 출력해야 한다.

예제 입력 1 복사
6 4
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1
예제 출력 1 복사
8
예제 입력 2 복사
6 4
0 -1 0 0 0 0
-1 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1
예제 출력 2 복사
-1
예제 입력 3 복사
6 4
1 -1 0 0 0 0
0 -1 0 0 0 0
0 0 0 0 -1 0
0 0 0 0 -1 1
예제 출력 3 복사
6
예제 입력 4 복사
5 5
-1 1 0 0 0
0 -1 -1 -1 0
0 -1 -1 -1 0
0 -1 -1 -1 0
0 0 0 0 0
예제 출력 4 복사
14
예제 입력 5 복사
2 2
1 -1
-1 1
예제 출력 5 복사
0
*/