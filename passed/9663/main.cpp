#include <iostream>
#include <stack>

using namespace std;


/**
 * https://wkdtjsgur100.github.io/N-Queen/
 * 한 행 또는 열에 퀸 하나만 존재하니까
 * board[][]대신에 col[]으로 표시하면 더 좋음.
 * 유효한지 체크하는 것도 더 편함. 
 * 
 */

int boardSize = 0;
int board[15][15];
int answer = 0;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int x, int y)
{
  if(board[x][y] > 0)
    return false;
  return true;
}

void traverse(int height)
{
  if(height == boardSize)
  {
    answer++;
    return;
  }

  for(int i=0; i<boardSize; i++)
  {
    if(isValid(height, i))
    {

      board[height][i]++;
      for(int di=1; di<boardSize; di++)
      {
        for(int a=0; a<8; a++)
        {
          if(
            height + dx[a]*di < boardSize && 
            height + dx[a]*di >= 0 && 
            i + dy[a]*di < boardSize && 
            i + dy[a]*di >= 0
            )
          {
            board[height + dx[a]*di ][i + dy[a]*di]++;
          }
        }
      }
      traverse(height + 1);
      board[height][i]--;
      for(int di=1; di<boardSize; di++)
      {
        for(int a=0; a<8; a++)
        {
          if(
            height + dx[a]*di < boardSize && 
            height + dx[a]*di >= 0 && 
            i + dy[a]*di < boardSize && 
            i + dy[a]*di >= 0
            )
          {
            board[height + dx[a]*di][i + dy[a]*di]--;
          }
        }
      }
      
    }
  }
}

int main(void){
  cin >> boardSize;

  for(int i=0; i<boardSize; i++)
    for(int j=0; j<boardSize; j++)
      board[i][j] = 0;


  traverse(0);

  cout << answer << '\n';
  return 0;
}