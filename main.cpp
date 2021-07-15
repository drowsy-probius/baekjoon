#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(void){
  std::map<char, int> m;
  string test = "abcedfg";

  m['a'] = 1;

  for(auto key : test)
  {
    if(m[key])
    {
      m[key]++;
    }
    else{
      m[key] = 1;
    }
  }

  for(const auto& [key, value] : m)
  {
    cout << key << ":" << value << '\n';
  }

  return 0;
}