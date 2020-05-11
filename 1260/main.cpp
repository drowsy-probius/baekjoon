#include <iostream>
#include <cstdio>
using namespace std;
int path[1001][10001] = {0, };
bool visited[1001] = {false, }; 


void dfs(int snode){
    if(!visited[snode]){
        visited[snode] = true;
        printf("%d ", snode);
        int i=0;
        while(path[snode][i] != 0) dfs(path[snode][i++]);
    }
}

void bfs(int snode){
    if(!visited[snode]){
        visited[snode] = true;
        printf("%d ", snode);
        int i=0;
        while(path[snode][i] != 0){
            visited[path[snode][i]] = true;
            printf("%d ", path[snode][i]);
            bfs(path[snode][i++]);
        }
    }
}

int main(void){
    int node, edge, snode;
    int i=0, x, y;
    cin >> node >> edge >> snode;
    while(edge--){
        i=0;
        cin >> x >> y;
        while(path[x][i] != 0) i++;
        path[x][i] = y; i=0;
        while(path[y][i] != 0) i++;
        path[y][i] = x;
    }
    dfs(snode);
    for(int i=0; i<1001; i++) visited[i] = false;
    printf("\n");
    bfs(snode);
    return 0;
}