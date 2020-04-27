#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        int stud=0, lower=0;
        double mean = 0.0;
        cin >> stud;
        vector<int> score(stud, 0);
        for(int i=0; i<stud; i++) { cin >> score[i]; mean += score[i]; }
        mean /= stud;
        for(int i=0; i<stud; i++) if(score[i] > mean) lower++;
        
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << (double)lower*100/stud << '%' << endl;
        cout.unsetf(ios::fixed);
    }
    return 0;
}