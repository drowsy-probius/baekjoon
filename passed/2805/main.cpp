#include <iostream>
using namespace std;

long long low = 0, mid, high = 0;

bool isPossible(int tree[], int number_of_trees, int length_of_tree){
  long long current_length = 0;
  for (int i = 0; i < number_of_trees; i++)
  {
    if(tree[i]-mid > 0){
      current_length += tree[i] - mid;
    }
  }

  if(current_length >= length_of_tree){
    return true;
  }
  return false;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int answer = 0;
  int number_of_trees, length_of_tree;
  cin >> number_of_trees >> length_of_tree;
  int tree[number_of_trees];
  for (int i = 0; i < number_of_trees;i++){
    cin >> tree[i];
    if(tree[i] > high){
      high = tree[i];
    }
  }
  mid = (low + high) / 2;

  while(low <= high){
    if(isPossible(tree, number_of_trees, length_of_tree)){
      low = mid + 1;
      if(answer < mid){
        answer = mid;
      }

    }else{
      high = mid - 1;
    }
    mid = (low + high) / 2;
  }

  cout << answer << '\n';

  return 0;
}
/*
입력
첫째 줄에 나무의 수 N과 상근이가 집으로 가져가려고 하는 나무의 길이 M이 주어진다. (1 ≤ N ≤ 1,000,000, 1 ≤ M ≤ 2,000,000,000)

둘째 줄에는 나무의 높이가 주어진다. 
나무의 높이의 합은 항상 M을 넘기 때문에, 상근이는 집에 필요한 나무를 항상 가져갈 수 있다. 
높이는 1,000,000,000보다 작거나 같은 양의 정수 또는 0이다.

출력
적어도 M미터의 나무를 집에 가져가기 위해서 절단기에 설정할 수 있는 높이의 최댓값을 출력한다.

예제 입력 1 
4 7
20 15 10 17
예제 출력 1 
15
*/