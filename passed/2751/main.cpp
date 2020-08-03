#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/* O(nlogn)
merge sort
heap sort
*/

int main(void){
    int size, i=0;
    cin >> size;

    std::vector<int> array;
    array.resize(size);

    for(i=0; i<size; i++) cin >> array[i];

    sort(array.begin(), array.end(), [](int a, int b){return a<b;});

    for(i=0; i<size; i++) cout << array[i] << " ";

    return 0;
}