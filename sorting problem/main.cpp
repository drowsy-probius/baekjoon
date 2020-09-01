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

void merge(int *a, int low, int middle, int high){
    int tmp[high-low] = {0,};
    int i = low, j = middle, global_i = 0;

    while(i<middle && j<high){
        if(a[i] < a[j]){
            tmp[global_i++] = a[i++];
        }else{
            tmp[global_i++] = a[j++];
        }
    }

    while(i<middle){
        tmp[global_i++] = a[i++];
    }

    while(j<high){
        tmp[global_i++] = a[j++];
    }
    
    global_i = 0;
    for(int i=low; i<high; i++){
        a[i] = tmp[global_i++];
    }

}

void merge_sort(int *a, int low, int high){
    if(high-low <= 1){
        return;
    }

    int middle = (low + high)/2;
    merge_sort(a, low, middle);
    merge_sort(a, middle, high);
    merge(a, low, middle, high);
}


int main(void){
    double start = clock();
    
    int array[15] = {1, 5, 6, 2, 3, 12, 5, 0, 9, 54, 34, 6, 7, 28, 99};
    
    print(array, 15);
    merge_sort(array, 0, 15);
    print(array, 15);
    
    cout << (double)(clock()-start) << "ms" << endl;
    return 0;
}