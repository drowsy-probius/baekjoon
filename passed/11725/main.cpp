#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  // undirected graph
  vector<int> graph[n+1];
  int answer[n + 1];

  for(int i=1; i<n; i++){
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }


  queue<int> q;
  bool isVisited[n + 1] = {
      false,
  };
  q.push(1); // start from root node

  while(!q.empty()){
    int root = q.front();
    q.pop();

    for(auto it=graph[root].begin(); it!=graph[root].end(); it++){
      if(!isVisited[*it]){
        answer[*it] = root;
        isVisited[*it] = true;
        q.push(*it);
      }
    }
  }

  for(int i=2; i<=n; i++){
    cout << answer[i] << '\n';
  }
  return 0;
}
/*
문제
루트 없는 트리가 주어진다. 이때, 트리의 루트를 1이라고 정했을 때, 각 노드의 부모를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 노드의 개수 N (2 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N-1개의 줄에 트리 상에서 연결된 두 정점이 주어진다.

출력
첫째 줄부터 N-1개의 줄에 각 노드의 부모 노드 번호를 2번 노드부터 순서대로 출력한다.

예제 입력 1 
7
1 6
6 3
3 5
4 1
2 4
4 7
예제 출력 1 
4
6
1
3
1
4
예제 입력 2 
12
1 2
1 3
2 4
3 5
3 6
4 7
4 8
5 9
5 10
6 11
6 12
예제 출력 2 
1
1
2
3
3
4
4
5
5
6
6*/