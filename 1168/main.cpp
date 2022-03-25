#include "iostream"
#include "string"
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int n, k, i=0;
  cin >> n >> k;
  string people = "";
  for(i=0; i<n; i++)
    people += to_string(i+1);

  cout << '<';
  i=k-1;
  while(n > 1)
  {
    cout << people[i] << ", ";
    people = people.substr(0, i) + people.substr(i+1, n-i);
    n--;
    i += k-1;
    i = i%n;
  }
  cout << people[0];
  cout << '>';
  return 0;
}