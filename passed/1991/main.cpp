#include <iostream>
using namespace std;
pair<char, char> tree[26];

void inOrder(char root, pair<char, char> p){
  if(root == '.'){
    return;
  }

  inOrder(p.first, tree[p.first - 'A']);
  cout << (char)(root);
  inOrder(p.second, tree[p.second - 'A']);
}

void preOrder(char root, pair<char, char> p){
  if (root == '.')
  {
    return;
  }

  cout << (char)(root);
  preOrder(p.first, tree[p.first - 'A']);
  preOrder(p.second, tree[p.second - 'A']);
}

void postOrder(char root, pair<char, char> p){
  if (root == '.')
  {
    return;
  }

  postOrder(p.first, tree[p.first - 'A']);
  postOrder(p.second, tree[p.second - 'A']);
  cout << (char)(root);
}

int main(void){
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    char root, left, right;
    cin >> root >> left >> right;
    tree[root - 'A'].first = left;
    tree[root - 'A'].second = right;
  }

  preOrder('A', tree[0]);
  cout << '\n';
  inOrder('A', tree[0]);
  cout << '\n';
  postOrder('A', tree[0]);
  cout << '\n';

  return 0;
}

/*
입력
첫째 줄에는 이진 트리의 노드의 개수 N(1≤N≤26)이 주어진다. 
둘째 줄부터 N개의 줄에 걸쳐 각 노드와 그의 왼쪽 자식 노드, 오른쪽 자식 노드가 주어진다. 
노드의 이름은 A부터 차례대로 영문자 대문자로 매겨지며, 항상 A가 루트 노드가 된다. 
자식 노드가 없는 경우에는 .으로 표현된다.

출력
첫째 줄에 전위 순회, 둘째 줄에 중위 순회, 셋째 줄에 후위 순회한 결과를 출력한다. 각 줄에 N개의 알파벳을 공백 없이 출력하면 된다.

예제 입력 1 
7
A B C
B D .
C E F
E . .
F . G
D . .
G . .
예제 출력 1 
ABDCEFG
DBAECFG
DBEGFCA
*/