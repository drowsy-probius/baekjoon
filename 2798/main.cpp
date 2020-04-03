#include <iostream>
using namespace std;
int main(void){
    int num=0, max=0, ans=0;
    int i=0, j=0, k=0;
    int* array;

    cin >> num >> max;
    array = new int[num];

    for(i=0; i<num; i++){
        cin >> array[i];
    }

    for(i=0; i<num-2; i++){
        for(j=i+1; j<num-1; j++){
            for(k=j+1; k<num; k++){
                if( (array[i]+array[j]+array[k])>ans && (array[i]+array[j]+array[k])<=max ){
                    ans = (array[i]+array[j]+array[k]);
                }
            }
        }
    }
    cout << ans;
    delete[] array;
    return 0;
}