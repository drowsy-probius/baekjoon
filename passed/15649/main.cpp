#include <iostream>
#define MAX 8+1
using namespace std;
// https://jaimemin.tistory.com/1237
int N,M;
int arr[MAX];
bool visited[MAX];  // initialized with false

void func(int cnt){
    if(cnt == M){
        for(int i=0; i<M; i++) cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=1; i<=N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt] = i;
            func(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void){
    cin >> N >> M;

    func(0);

    return 0;
}