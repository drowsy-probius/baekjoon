#include <iostream>
#include <queue>
using namespace std;
int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int dh[4] = {-1, 0, 0, 1};
  int dw[4] = {0, -1, 1, 0};

  int h, w;
  queue<pair<int, int>> q;
  cin >> h >> w;
  int map[h][w];
  bool isvisited[h][w];

  for (int i = 0;i<h;i++){
    for (int j = 0;j<w; j++){
      char k;
      cin >> k;
      map[i][j] = k - '0';

      isvisited[i][j] = false;
    }
  }

  q.push(make_pair(0, 0));
  
  while(!q.empty()){
    pair<int, int> _p = q.front();
    q.pop();
    
    if(_p == make_pair(h-1, w-1)){
      continue;
    }

    for(int i=0; i<4; i++){
      int nh = _p.first + dh[i];
      int nw = _p.second + dw[i];

      if(nh<0 || nh>=h || nw<0 || nw >=w){
        continue;
      }

      if( map[nh][nw] != 0 && !isvisited[nh][nw]){
        isvisited[nh][nw] = true;

        if(map[nh][nw] == 1){
          map[nh][nw] = map[_p.first][_p.second] + 1;
        }else
        {
          map[nh][nw] = min(map[nh][nw], map[_p.first][_p.second] + 1);
        }

        q.push(make_pair(nh, nw));
      }

    }
  }

  cout << map[h - 1][w - 1] << '\n';

  return 0;
}

/*
입력
첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 붙어서 입력으로 주어진다.

출력
첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.

예제 입력 1 
4 6
101111
101010
101011
111011
예제 출력 1 
15
예제 입력 2 
4 6
110110
110110
111111
111101
예제 출력 2 
9
예제 입력 3 
2 25
1011101110111011101110111
1110111011101110111011101
예제 출력 3 
38
예제 입력 4 
7 7
1011111
1110001
1000001
1000001
1000001
1000001
1111111
예제 출력 4 
13
*/