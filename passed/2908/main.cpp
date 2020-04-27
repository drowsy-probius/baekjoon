#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if( A > B) cout << A << endl;
    else cout << B << endl;

    return 0;
}