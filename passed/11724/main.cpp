#include <iostream>
#define NODES 1001
using namespace std;

bool graph[NODES][NODES] = {
    false,
};
bool visited[NODES] = {
    false,
};
int V, E, numsOfCC = 0;

void dfs(int startnode)
{
    for (int i = 1; i <= V; i++)
    {
        if (graph[startnode][i] && !visited[i])
        {
            visited[i] = true;
            dfs(i);
        }
    }
}

void cc(){
    for (int i = 1; i <= V; i++){
        if( graph[i][0] && !visited[i] ){
            numsOfCC++;
            dfs(i);
        }
    }
}

int main(void){
    cin >> V >> E;

    for(int i=1; i<=V; i++){
        graph[i][0] = true;         //mark for existence of node
    }

    for(int i=0; i<E; i++){
        int start, end;
        cin >> start >> end;
        graph[start][end] = true;
        graph[end][start] = true;
    }

    cc();   //start node: 1

    cout << numsOfCC << '\n';

    return 0;
}
/*
문제
방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 
둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 
같은 간선은 한 번만 주어진다.

출력
첫째 줄에 연결 요소의 개수를 출력한다.

예제 입력 1 복사
6 5
1 2
2 5
5 1
3 4
4 6
예제 출력 1 복사
2
*/