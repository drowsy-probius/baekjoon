#include <iostream>
#include <vector>
using namespace std;

int diameter = 0;
int farthestnode = 1;

void DFS(vector<pair<int,int>> graph[], bool isVisited[], int root, int totalWeight){
  isVisited[root] = true;

  if (diameter < totalWeight)
  {
    diameter = totalWeight;
    farthestnode = root;
  }

  for (auto it = graph[root].begin(); it != graph[root].end();it++){
    if(!isVisited[it->first]){
      DFS(graph, isVisited, it->first, totalWeight + it->second);
    }
  }
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  int snode, enode, weight;
  cin >> n;
  vector<pair<int, int>> graph[n + 1];
  bool isVisited[n + 1];
  fill(isVisited, isVisited + n + 1, false);

  for(int i=1; i<n; i++){
    cin >> snode >> enode >> weight;
    graph[snode].push_back(make_pair(enode, weight));
    graph[enode].push_back(make_pair(snode, weight));
  }

  DFS(graph, isVisited, 1, 0);

  diameter = 0;
  fill(isVisited, isVisited + n + 1, false);

  DFS(graph, isVisited, farthestnode, 0);

  cout << diameter << '\n';

  return 0;
}
/*
입력
파일의 첫 번째 줄은 노드의 개수 n(1 ≤ n ≤ 10,000)이다. 
둘째 줄부터 n번째 줄까지 각 간선에 대한 정보가 들어온다. 
간선에 대한 정보는 세 개의 정수로 이루어져 있다. 
첫 번째 정수는 간선이 연결하는 두 노드 중 부모 노드의 번호를 나타내고, 두 번째 정수는 자식 노드를, 세 번째 정수는 간선의 가중치를 나타낸다. 
간선에 대한 정보는 부모 노드의 번호가 작은 것이 먼저 입력되고, 부모 노드의 번호가 같으면 자식 노드의 번호가 작은 것이 먼저 입력된다. 
루트 노드의 번호는 항상 1이라고 가정하며, 간선의 가중치는 100보다 크지 않은 양의 정수이다.

출력
첫째 줄에 트리의 지름을 출력한다.

예제 입력 1 
12
1 2 3
1 3 2
2 4 5
3 5 11
3 6 9
4 7 1
4 8 7
5 9 15
5 10 4
6 11 6
6 12 10
예제 출력 1 
45
*/