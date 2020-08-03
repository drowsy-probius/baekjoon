#include <iostream>
#include <algorithm>
using namespace std;

////////////////////////////////
// 왜 내가 짠건 시간초과나냐    //
////////////////////////////////

// void quick(int *arr, int arr_start, int arr_end)
// {
//     if(arr_start >= arr_end - 1) return;

//     int i = arr_start - 1;
//     int pivot = arr[arr_end - 1];
//     for(int j=arr_start; j < arr_end - 1; j++)
//     {
//         if( arr[j] < pivot )
//         {
//             i++;
//             auto t = arr[i];
//             arr[i] = arr[j];
//             arr[j] = t;
//         }
//     }
//     i++;
//     auto t = arr[i];
//     arr[i] = arr[arr_end - 1];
//     arr[arr_end - 1] = t;

//     quick(arr, arr_start, i);
//     quick(arr, i + 1, arr_end);
// }

// int custom_bi_search(int *cards, int size, int key){
//     int low, high;
//     int mid;
//     int count = 0;

//     // lowerbound
//     low = 0, high = size;
//     while(low < high)
//     {
//         mid = (low + high) / 2;
//         if( cards[mid] >= key ){
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
        
//     }
//     count += low * (-1);

//     // upperbound
//     low = 0, high = size;
//     while(low < high)
//     {
//         mid = (low + high) / 2;
//         if( cards[mid] > key )
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
        
//     }
//     count += low;

//     return count;
// }


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;
    int cards[n];
    for(int i=0;i<n;i++){
        cin >> cards[i];
    }
    cin >> m;
    int keys[m];
    for(int i=0;i<m;i++){
        cin >> keys[i];
    }

    //quick(cards, 0, n);
    sort(cards, cards+n);
    for(int i=0; i<m; i++){
        int answer = upper_bound(cards, cards+n, keys[i]) - lower_bound(cards, cards+n, keys[i]);
        cout << answer << " ";
        // cout << custom_bi_search(cards, n, keys[i]) << " ";
    }
    cout << '\n';

    return 0;
}
/*
입력
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 
둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 
숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 
넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 
이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.

예제 입력 1 
10
6 3 2 10 10 10 -10 -10 7 3
8
10 9 -5 2 3 4 5 -10
예제 출력 1 
3 0 0 1 2 0 0 2
*/