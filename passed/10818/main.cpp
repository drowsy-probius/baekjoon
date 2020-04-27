#include <iostream>
#include <limits>
using namespace std;
int main(void){
    int size = 0, tmp = 0;
    int largest = 0, smallest = numeric_limits<int>::max();

    cin >> size; 

    for(int i = 0; i<size; i++){
        cin >> tmp;
        if(tmp > largest) largest = tmp;
        if(tmp < smallest) smallest = tmp;
    }

    cout << smallest << " " << largest << endl;

    return 0;
}