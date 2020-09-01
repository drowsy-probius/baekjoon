#include <iostream>
using namespace std;
long long int g_answer = 0;

void merge(int *a, int low, int mid, int high){
    int tmp[high-low] = {0, };
    long long int answer = 0, count = 0;
    int i = low, j = mid, g_i = 0;
    while(i<mid && j<high){
        if(a[i] <= a[j]){
            tmp[g_i++] = a[i++];
            answer += count;
        }else{
            tmp[g_i++] = a[j++];
            count++;
        }
    }

    while(i<mid){
        tmp[g_i++] = a[i++];
        answer += count;
    }

    while(j<high){
        tmp[g_i++] = a[j++];
    }

    g_i=0;
    for(int i=low; i<high; i++){
        a[i] = tmp[g_i++];
    }

    g_answer += answer;
}

void merge_sort(int *a, int low, int high){
    if(high - low <= 1){
        return;
    }

    int mid = (low + high)/2;
    merge_sort(a, low, mid);
    merge_sort(a, mid, high);
    merge(a, low, mid, high);
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long int n;
    cin >> n;
    int arr[n] = {0, };
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    merge_sort(arr, 0, n);

    cout << g_answer << '\n';

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << ' ';
    // }

    return 0;
}

/*
10
0 23 1 -42 3 9 12 33 2 -9
20
문제
N개의 수로 이루어진 수열 A[1], A[2], …, A[N]이 있다. 
이 수열에 대해서 버블 소트를 수행할 때, Swap이 총 몇 번 발생하는지 알아내는 프로그램을 작성하시오.

버블 소트는 서로 인접해 있는 두 수를 바꿔가며 정렬하는 방법이다. 
예를 들어 수열이 3 2 1 이었다고 하자. 
이 경우에는 인접해 있는 3, 2가 바뀌어야 하므로 2 3 1 이 된다. 
다음으로는 3, 1이 바뀌어야 하므로 2 1 3 이 된다. 
다음에는 2, 1이 바뀌어야 하므로 1 2 3 이 된다. 
그러면 더 이상 바꿔야 할 경우가 없으므로 정렬이 완료된다.

입력
첫째 줄에 N(1≤N≤500,000)이 주어진다. 
다음 줄에는 N개의 정수로 A[1], A[2], …, A[N]이 주어진다. 
각각의 A[i]는 0≤|A[i]|≤1,000,000,000의 범위에 들어있다.

출력
첫째 줄에 Swap 횟수를 출력한다

예제 입력 1 
3
3 2 1
예제 출력 1 
3

247691

=> 
N*(N-1)/2 - (정렬된 원소의 개수)
*/