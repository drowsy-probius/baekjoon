#include <iostream>
using namespace std;
int main(void){
    int a;
    cin >> a;
    for(int i=a; i>0; i--){
        for(int j=i; j<a; j++) cout << " ";
        for(int k=0; k<2*i-1; k++) cout << "*";
        cout << " " << endl;
    }
    for(int i=2; i<a+1; i++){
        for(int j=i; j<a; j++) cout << " ";
        for(int k=0; k<2*i-1; k++) cout << "*";
        cout << " " << endl;
    }
    return 0;
}