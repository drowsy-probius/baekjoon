#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;
int myAtoi(string str) {
        if(str.length() < 1){
            return 0;
        }
        
        int strlen = str.length();
        int sign = 1, idx=0;
        double answer = 0;
        
        while(idx<strlen && str.at(idx) == ' '){
            idx++;
        }
        
        printf("%d %d\n", strlen, idx);
        
        
        if(idx>=0 && str.at(idx) == '-' ){
            sign = -1;
            idx++;
        }else if(idx>=0 && str.at(idx) == '+' ){
            idx++;
        }
        
        while(idx<strlen && str.at(idx) >= '0' && str.at(idx) <= '9'){
            if(answer*sign < INT_MIN/10){
                return INT_MIN;
            }else if(answer > INT_MAX/10){
                return INT_MAX;
            }
            answer *= 10;
            answer += str.at(idx) - '0';
            idx++;
        }
        answer *= sign;
        
        return answer;
    }
 
int main(){
    
    cout << myAtoi("+15") << '\n';

    return 0;
}

/*
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
*/