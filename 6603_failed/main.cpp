#include <iostream>
using namespace std;

const int MAX = 6;
int SIZE=0;
int *arr;
int ans[MAX];
bool *visited;

void func(int cnt){
    if(cnt == MAX){
        for(int i=0; i<MAX; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=0; i<SIZE; i++){
        if(!visited[i]){
            visited[i] = true;
            ans[cnt] = arr[i];
            func(cnt+1);
            visited[i] = false;
        }
    }

}

int main(void){
    do{
        cin >> SIZE;

        arr = new int[SIZE];
        visited = new bool[SIZE];
        for(int i=0; i<SIZE; i++) cin >> arr[i];

        delete[] arr, visited;

        func(0);        
    }while(SIZE != 0);

    return 0;
}