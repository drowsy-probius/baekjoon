#include <iostream>
using namespace std;
long long low = 1, mid, high = 0;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int k, n;
  cin >> k >> n;
  int cables[k];
  for (int i = 0; i < k; i++)
  {
    cin >> cables[i];
    if (high < cables[i])
    {
      high = cables[i];
    }
  }

  mid = (low + high) / 2;

  int new_n;
  long long answer = 0;

  while (low <= high)
  {
    new_n = 0;
    for (int i = 0; i < k; i++)
    {
      new_n += cables[i] / mid;
    }

    if (new_n < n)
    {
      high = mid - 1;
    }
    else
    {
      if (answer < mid)
        answer = mid;
      low = mid + 1;
    }
    mid = (low + high) / 2;
  }

  cout << answer << '\n';

  return 0;
}

/* binary search
입력
첫째 줄에는 오영식이 이미 가지고 있는 랜선의 개수 K, 그리고 필요한 랜선의 개수 N이 입력된다. 
K는 1이상 10,000이하의 정수이고, N은 1이상 1,000,000이하의 정수이다. 그리고 항상 K ≦ N 이다. 
그 후 K줄에 걸쳐 이미 가지고 있는 각 랜선의 길이가 센티미터 단위의 정수로 입력된다.
랜선의 길이는 231-1보다 작거나 같은 자연수이다.

출력
첫째 줄에 N개를 만들 수 있는 랜선의 최대 길이를 센티미터 단위의 정수로 출력한다.

예제 입력 1 
4 11
802
743
457
539
예제 출력 1 
200
*/