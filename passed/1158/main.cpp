#include <iostream>
#include <queue>
using namespace std;
int main(void){
    int n, k;
    queue<int> yosef;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        yosef.push(i);

    cout << "<";
    while ( yosef.size() != 1 )
    {
        for (int j = 1; j<k; j++){
            yosef.push(yosef.front());
            yosef.pop();
        }
        cout << yosef.front() << ", ";
        yosef.pop();
    }
    cout << yosef.front() << ">\n";
    return 0;
}
