#include <iostream>
using namespace std;
string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main(void){
    int m, d;
    int date = 0;

    cin >> m >> d;

    date += d-1;
    while(--m){
        switch(m){
            case 2:
                date += 28;
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                date += 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                date += 30;
                break;
        }
    }

    cout << day[date%7] << endl;

    return 0;
}