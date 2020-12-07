#include <iostream>
#include <queue>
#define MAX 100001

using namespace std;

int count[MAX];
queue<int> bfs;

int solve(int n, int k)
{
  int current;
  bfs.push(n);
  while( !bfs.empty() )
  {
    current = bfs.front();
    bfs.pop();

    if(current == k)
    {
      return count[current];
    }

    if(current - 1 >= 0 && count[current - 1] == 0)
    {
      bfs.push(current - 1);
      count[current - 1] = count[current] + 1;
    }

    if(current + 1 < MAX && count[current + 1] == 0)
    {
      bfs.push(current + 1);
      count[current + 1] = count[current] + 1;
    }

    if(current * 2 < MAX && count[current * 2] == 0)
    {
      bfs.push(current * 2);
      count[current * 2] = count[current] + 1;
    }

  }

  return -1;
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n, k;
  cin >> n >> k;

  for(int i=0; i<MAX; i++)
  {
    count[i] = 0;
  }

  if(n > k)
  {
    cout << n - k <<  '\n';
  }
  else
  {
    cout << solve(n, k) << '\n';
  }  
  return 0;
}