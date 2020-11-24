#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  map<string, int> string_dict;
  vector<string> num_dict;

  int n, m;
  cin >> n >> m;

  for(int i=0; i<n; i++)
  {
    string name;
    cin >> name;
    string_dict[name] = i+1;

    num_dict.push_back(name);
  }

  for(int i=0; i<m; i++)
  {
    string key;
    cin >> key;
    if(key[0] >= '0' && key[0] <= '9')
    {
      int _key = stoi(key);
      cout << num_dict.at(_key - 1) << '\n';
    }
    else
    {
      cout << string_dict[key] << '\n';
    }
    
  }

  return 0;
}