#include <iostream>
#include <cassert>
using namespace std;

int main(void){
    int a[10];
    int* p = a;

    assert(sizeof(a) / sizeof(a[0]) == 10);
    cout << sizeof(p) << "\n";
    cout << sizeof(int*) << "\n";
    cout << sizeof(*p) << "\n";
    cout << sizeof(int) << "\n";
    assert(sizeof(p) == sizeof(int*));
    assert(sizeof(*p) == sizeof(int));
    return 0;
}