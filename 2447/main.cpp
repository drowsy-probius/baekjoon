#include <iostream>
#include <string>
using namespace std;
string S="";
void star(int n){
    if(n==1){S += "*";}
    for(int i=0; i<n*n/9; i++){
        if(i==4){
            for(int i=0; i<n/3; i++) S+= "o";
        }else{
            for(int i=0; i<n/3; i++)
        }

        if(i%3==2){
            cout << S << endl;
            S="";
        }
    }
}
int main(void){
    int n;
    cin >> n;
    star(n);
    return 0;
}