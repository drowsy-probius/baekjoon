#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
void swap(int &a, int &b){int tmp = a; a=b; b=tmp;}
void print(int *a, int length){
    for(int i=0; i<length; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void quick(int *a, int low, int high){
    if(low >= high) return;

    int i=low, idx=low-1, pivot=high;
    for(; i<high; i++){
        if( a[i] < a[pivot]){
            swap( a[i], a[++idx] );
        }
    }
    swap( a[++idx], a[pivot]);
  
    quick(a, low, idx-1);
    quick(a, idx+1, high);
}

void merge(int &a){

}

void bubble(int &a){

}

int main(void){
    double start = clock();
    
    int array[15] = {1, 5, 6, 2, 3, 12, 5, 0, 9, 54, 34, 6, 7, 28, 99};
    
    print(array, 15);
    quick(array, 0, 14);
    print(array, 15);
    
    cout << (double)(clock()-start) << "ms" << endl;
    return 0;
}