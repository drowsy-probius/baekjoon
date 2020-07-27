#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int cards[], int cards_size, int key)
{
  int low = 0, high = cards_size - 1;
  int mid = 0;

  while (low < high)
  {

    mid = (low + high) / 2;
    if (cards[mid] > key)
    {
      high = mid - 1;
    }
    else if (cards[mid] < key)
    {
      low = mid + 1;
    }
    else
    {
      return 1;
      break;
    }
  }
  if (cards[low] == key)
  {
    return 1;
  }
  return 0;
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n;
  int cards[n] = {
      0,
  };
  for (int i = 0; i < n; i++)
  {
    cin >> cards[i];
  }
  sort(cards, cards + n);

  cin >> m;

  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    cout << binary_search(cards, n, k) << " ";
  }
  cout << '\n';

  return 0;
}
/*
입력
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 
둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 
숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다. 
두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 
넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 
이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다

출력
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.

예제 입력 1 
5
6 3 2 10 -10
8
10 9 -5 2 3 4 5 -10
예제 출력 1 
1 0 0 1 1 0 0 1
*/