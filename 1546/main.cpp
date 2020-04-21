#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int size;
    double sum=100.0;
    cin >> size;
    vector<int> score(size, 0);
    for(int i=0; i<size; i++) cin >> score[i];
    sort(score.begin(), score.end(), [](int a, int b){return a>b;});
    for(int i=1; i<size; i++){
        sum += score[i]/(double)score[0] * 100;
    }
    cout << fixed;
    cout.precision(6);
    cout << (double)sum/size << endl;

    cout.unsetf(ios::fixed); // reset manipulate
    return 0;
}