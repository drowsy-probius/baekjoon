#include<stdio.h>
#include<stdlib.h>

int main(void){
    int* arr;
    int size = 0;

    scanf("%d", &size);
    arr = (int*)calloc(size, sizeof(int));

    

    for(int i = 0; i<size; i++){
        scanf("%d", arr[i]); 
    }



    free(arr);
    return 0;
}