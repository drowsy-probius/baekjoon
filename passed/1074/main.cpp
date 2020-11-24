#include <iostream>
#include <cmath>

using namespace std;

int dx[] = {0, 1, 0, 1};
int dy[] = {0, 0, 1, 1};

int answer = 0;
int count = 0;
int r = 0;
int c = 0;

void solve(int n, int offsetX, int offsetY)
{
  if(n == 1)
  {
    for(int i=0; i<4; i++)
    {
      if(r == offsetY + dy[i] && c == offsetX + dx[i]){
        answer = count;
      }
      count++;
    }
    return;
  }

  if(r < offsetY + pow(2, n-1) && c < offsetX + pow(2, n-1))
  {
    solve(n-1, offsetX, offsetY);
  }
  else if(r < offsetY + pow(2, n-1) && c >= offsetX + pow(2, n-1))
  {
    count += 1 * pow(2, n-1) * pow(2, n-1);
    solve(n-1, offsetX + pow(2, n-1), offsetY);
  }
  else if(r >= offsetY + pow(2, n-1) && c < offsetX + pow(2, n-1))
  {
    count += 2 * pow(2, n-1) * pow(2, n-1);
    solve(n-1, offsetX, offsetY + pow(2, n-1));
  }
  else if(r >= offsetY + pow(2, n-1) && c >= offsetX + pow(2, n-1))
  {
    count += 3 * pow(2, n-1) * pow(2, n-1);
    solve(n-1, offsetX + pow(2, n-1), offsetY + pow(2, n-1));
  }
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n >> r >> c; 
  solve(n, 0, 0);
  cout << answer << '\n';
  return 0;
}