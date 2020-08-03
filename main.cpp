#include <iostream>
using namespace std;

void quick(int *arr, int arr_start, int arr_end)
{
    if(arr_start >= arr_end - 1) return;

    int i = arr_start - 1;
    int pivot = arr[arr_end - 1];
    for(int j=arr_start; j < arr_end - 1; j++)
    {
        if( arr[j] < pivot )
        {
            i++;
            auto t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    i++;
    auto t = arr[i];
    arr[i] = arr[arr_end - 1];
    arr[arr_end - 1] = t;

    quick(arr, arr_start, i);
    quick(arr, i + 1, arr_end);
}


int main(void){
    int arr[10] = {0, 23, 1, -42, 3, 
                    9, 12, 33, 2, -9};
    
    quick(arr, 0, 10);
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}