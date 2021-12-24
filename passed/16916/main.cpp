#include "iostream"
#include "vector"
#include "string"

using namespace std;

vector<int> get_pi(string a)
{
  int begin=0, length = a.length();
  vector<int> pi(length, 0);

  for(int i=1; i<length; i++)
  {
    while(a[i] != a[begin] && begin > 0)
      begin = pi[begin - 1];
    if(a[i] == a[begin])
      pi[i] = ++begin;
  }
  
  return pi;
}

// KMP algorithm
int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  if(a.size() < b.size())
  {
    cout << 0;
    return 0;
  }

  int outer_size = a.size();
  int inner_size = b.size();
  vector<int> pi = get_pi(b);

  int j = 0;
  for(int i=0; i<outer_size; i++)
  {
    while(a[i] != b[j] && j>0)
      j = pi[j-1];
    if(a[i] == b[j])
    {
      if(j == inner_size - 1)
      {
        cout << 1;
        return 0;
      }
      else
      {
        j++;
      }
    }
  }

  cout << 0;
  return 0;
}