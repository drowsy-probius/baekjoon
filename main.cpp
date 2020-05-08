#include <cmath>
using namespace std;

int gcdfunc(int a, int b){
    int c;
    while(b){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

long long solution(int w,int h)
{
	long long answer = w*h;
    if(w==h) answer -= w;
    else{
        int gcd = gcdfunc(w, h);
        long long s_ans = 0;
        int sw = w/gcd, sh = h/gcd;
        if(sw == 1 || sh == 1){
            s_ans = sw*sh;
        }else{
            if(sw > sh){int tmp = sw; sw = sh; sh = tmp; }
            for(int i=1; i<=sw; i++){
                if(i==1){
                    s_ans += sh - floor(-1*(sh/(float)sw) + sh);
                }else if(i==sw){
                    s_ans += ceil(-1*(sh/(float)sw)*i + sh);
                }else{
                    int prev_val = -1*(sh/(float)sw)*(i-1) + sh;
                    int cur_val = -1*(sh/(float)sw)*i + sh;
                    s_ans += ceil(prev_val) - floor(cur_val);
                    
                }
            }
        }
        answer -= s_ans*gcd;
    }
	return answer;
}

int main(void){
    int a = 8, b = 12;
    solution(a, b);
    return 0;
}