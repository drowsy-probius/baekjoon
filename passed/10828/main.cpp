#include <iostream>
#define SIZE 5001
using namespace std;

int stack[SIZE] = {0, };
int top = 0;

int main(void){
    int n, elem;
    string cmd;
    cin >> n;
    while(n--){
        cin >> cmd;
        if(cmd == "push"){
            cin >> elem;
            stack[top++] = elem;
        }else if(cmd == "pop"){
            if(top == 0) cout << -1 << endl;
            else cout << stack[--top] << endl;
        }else if(cmd == "size"){
            cout << top << endl;
        }else if(cmd == "empty"){
            if(top) cout << 0 << endl;
            else cout << 1 << endl;
        }else if(cmd == "top"){
            if(top == 0) cout << -1 << endl;
            else cout << stack[top-1] << endl;
        }
    }
    return 0;
}