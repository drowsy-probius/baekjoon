#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
void swap(int *a, int *b){int tmp = *a; *a=*b; *b=tmp;}
void print(int *a, int length){
    for(int i=0; i<length; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void quick(int *a, int start, int end){
    if(start >= end) return;
    int pivot = start;
    int low = start+1, high = end-1;
    
    while(low <= high){
        
    }

    swap( a[--low], a[pivot] );
    quick(a, start, low-1);
    quick(a, low+1, end);
}

void merge(int &a){

}

void bubble(int &a){

}

int main(void){
    double start = clock();
    int array[15] = {1, 5, 6, 2, 3, 12, 5, 0, 9, 54, 34, 6, 7, 28, 99};

    print(array, 15);
    quick(array, 0, 15);
    print(array, 15);

    cout << (double)(clock()-start) << "ms" << endl;
    return 0;
}