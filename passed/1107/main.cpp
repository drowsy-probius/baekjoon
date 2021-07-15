#include <iostream>
#include <cstdlib>

/**
 * 참고
 * https://seol-limit.tistory.com/48
 */

using namespace std;

bool buttons[10];

int enterChannel(int channel)
{
  if(channel == 0)
  {
    if(!buttons[channel])
      return 0;
    
    return 1;
  }
  int n = channel;
  int count = 0;
  while(n)
  {
    if(!buttons[n%10])
      return 0;
    
    count++;
    n /= 10;
  }
  return count;
} 

int main(void)
{
  for(int i=0; i<10; i++)
    buttons[i] = true;

  int channel, m, tmp;
  cin >> channel >> m;
  
  for(int i=0; i<m; i++)
  {
    cin >> tmp;
    buttons[tmp] = false;
  }

  int answer = abs(channel - 100);

  for(int i=0; i<1000001; i++)
  {
    int channelCount = enterChannel(i);
    if(channelCount > 0)
    {
      answer = min(answer, abs(i - channel) + channelCount);
    }
  }

  cout << answer << '\n';
  return 0;
}