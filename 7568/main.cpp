#include <iostream>

using namespace std;

int main(void){
    int size=0, i=0, j=0;
    int** array;
    int* ans;

    cin >> size;
    
    array = (int**)new int[size];
    ans = new int[size];
    for(i=0;i<size;i++) ans[i]=size;

    for(i=0;i<size;i++){
        array[i] = (int*)new int[2];
        cin >> array[i][0] >> array[i][0];
    }

    for(i=0; i<size-1; i++){
        for(j=i; j<size; j++){
            if(array[i][0]>array[j][0] && array[i][1]>array[j][1]){
                ans[i]--;
            }
        }
    }

    for(i=0;i<size;i++) cout << ans[i] << " ";
    
    for(i=0;i<size;i++) delete[] array[i];
    delete[] array;
    delete[] ans;
    return 0;
}

/*
p1: a1, b1
p2: a2, b2

if(a1>a2 && b1>b2) then p1>p2
*/