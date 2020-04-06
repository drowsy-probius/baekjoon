#include <iostream>
using namespace std;

void insertion(int* array, int size){
    int key=0, i=0, j=0;

    for(i=1; i<size; i++){
        key = array[i];
        for(j=i-1; j>=0 && array[j]>key; j--){
            array[j+1] = array[j];
        }
        array[j+1] = key;
    }
}

void bubble(int* array, int size){
    int i=0, j=0, tmp=0;
    for(i=0; i<size-1; i++){
        for(j=1; j<size; j++){
            if(array[j-1] > array[j]){
                tmp = array[j-1];
                array[j-1] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int main(void){
    int size, i=0;
    int* array;

    cin >> size;

    array = new int[size];
    for(i=0; i<size; i++) cin >> array[i];

    //insertion(array, size);
    bubble(array, size);
    for(i=0; i<size; i++) cout << array[i] << " ";

    return 0;
}

/* O(n^2)
insertion sort
5 2 3 1

5 | 2 3 1

2 3 1
5 |

3 1
2 5 |


selection sort


bubble sort

*/