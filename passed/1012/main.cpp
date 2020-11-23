#include <iostream>
#include <vector>
#define HEIGHT 50
#define WIDTH 50

using namespace std;

int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};

int answer = 0;
int map[HEIGHT][WIDTH];
bool visited[HEIGHT][WIDTH];

void traverse(int x, int y, int width, int height)
{
  if(x < 0 || y < 0 || x >= width || y >= height) return;
  if(map[y][x] == 0 || visited[y][x] == true) return;

  visited[y][x] = true;

  for(int i=0; i<4; i++)
  {
    traverse(x + dx[i], y + dy[i], width, height);
  }
}

void solve(int width, int height)
{
  for(int i=0; i<height; i++)
  {
    for(int j=0; j<width; j++)
    {
      if(map[i][j] == 1 && visited[i][j] == false)
      {
        answer++;
        traverse(j, i, width, height);
      }
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;

  while(t--)
  {
    int width, height, total;
    cin >> width >> height >> total;

    for(int i=0; i<height; i++)
      for(int j=0; j<width; j++)
      {
        map[i][j] = 0;
        visited[i][j] = false;
      }
  
    for(int i=0; i<total; i++)
    {
      int x, y;
      cin >> x >> y;
      map[y][x] = 1;
    }

    answer = 0;

    solve(width, height);

    cout << answer << '\n';
    
  }

  return 0;
}