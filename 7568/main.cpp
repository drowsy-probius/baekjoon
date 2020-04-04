#include <iostream>
#include <string.h>

using namespace std;

int main(void){
    int size=0, i=0, j=0;
    int** array;
    int* ans;

    cin >> size;
    
    array = (int**)new int*[size];
    ans = new int[size];
    for(i=0;i<size;i++) ans[i]=1;

    for(i=0;i<size;i++){
        array[i] = (int*)new int[2];
        memset(array[i], 0, sizeof(int)*2); // initialize memory space to 0
        cin >> array[i][0] >> array[i][1];
    }

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if( i!=j && array[j][0]>array[i][0] && array[j][1]>array[i][1]){
                ans[i]++;
            }
        }
    }

    for(i=0; i<size; i++){
        cout << ans[i] << " ";
    }
    
    for(i=0;i<size;i++) delete[] array[i];
    delete[] array;
    delete[] ans;
    return 0;
}

/*
p1  1
p2  1
p3  1

if p2>p1 then p1++
if p3>p1 then p1++


*/