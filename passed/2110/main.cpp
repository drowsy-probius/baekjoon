#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int numOfHouses, numOfRouters;
  cin >> numOfHouses >> numOfRouters;
  int houses[numOfHouses];
  for (int i = 0; i < numOfHouses;i++){
    cin >> houses[i];
  }
  sort(houses, houses + numOfHouses);

  int low, mid, high; // distances
  low = 1;
  high = houses[numOfHouses - 1] - houses[0];
  int answer = 0;

  while(low <= high){
    mid = (low + high) / 2;

    int currentRouters = 1;
    int standardHouse = houses[0];

    for (int i = 1; i < numOfHouses;i++){
      if(houses[i]-standardHouse >= mid){
        currentRouters++;
        standardHouse = houses[i];
      }
    }

    if(currentRouters >= numOfRouters){
      answer = mid;
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }

  cout << answer << '\n';

  return 0;
}

/*
입력
첫째 줄에 집의 개수 N (2 ≤ N ≤ 200,000)과 공유기의 개수 C (2 ≤ C ≤ N)이 하나 이상의 빈 칸을 사이에 두고 주어진다. 
둘째 줄부터 N개의 줄에는 집의 좌표를 나타내는 xi (1 ≤ xi ≤ 1,000,000,000)가 한 줄에 하나씩 주어진다.

출력
첫째 줄에 가장 인접한 두 공유기 사이의 최대 거리를 출력한다.

예제 입력 1 
5 3
1
2
8
4
9
예제 출력 1 
3
힌트
공유기를 1, 4, 8 또는 1, 4, 9에 설치하면 가장 인접한 두 공유기 사이의 거리는 3이고, 
이 거리보다 크게 공유기를 3개 설치할 수 없다.
*/