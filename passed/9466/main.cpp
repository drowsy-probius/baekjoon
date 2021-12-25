#include "iostream"
#include "vector"
using namespace std;

int traverse(int idx, vector<int>& selection, vector<bool>& visited, vector<bool>& done, int* count)
{
  if(done[idx]) return 0;

  if(!visited[idx])
  {
    /**
     * visited 기록 안하면 루프(팀) 발견 못함.
     */
    visited[idx] = true;
    traverse(selection[idx], selection, visited, done, count);
  }
  else if(!done[idx])
  {
    /**
     * visited[idx]=true인 인원을 다시 방문하게 된 것이니까
     * 루프가 있다는 뜻
     * 
     * 루프(팀) 발견하고 팀에 속한 인원들은 done=true 설정
     */
    int t = idx;
    do
    {
      done[t] = true;
      t = selection[t];
    } while (t != idx);
    
  }

  /**
   * 루프(팀)에 속하지 못했으면 count증가하고 done=true 설정
   */
  if(!done[idx])
  {
    done[idx] = true;
    (*count)++;
  }
  
  return 0;
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int T;
  int student_nums = 0;
  vector<int> selection;
  vector<bool> done;
  vector<bool> visited;
  cin >> T;
  while(T--)
  {
    int temp;
    cin >> student_nums;
    selection = vector<int>(student_nums+1, 0);
    done = vector<bool>(student_nums+1, false);
    visited = vector<bool>(student_nums+1, false);
  
    for(int i=1; i<student_nums+1; i++)
    {
      cin >> temp;
      selection[i] = temp;
    }

    temp = 0;
    for(int i=1; i<student_nums+1; i++)
      traverse(i, selection, visited, done, &temp);
    cout << temp << '\n';
  }

  return 0;
}