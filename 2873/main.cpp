#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int row, column;

    bool is_down = true;
    bool is_right = true;
    int min_row = 0, min_column = 0, min_value = 10000, tmp = 0;

    cin >> row >> column;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> tmp;
            if( ((i+j)%2 == 1) ){

                if(tmp < min_value){
                    min_value = tmp;
                    min_row = i;
                    min_column = j;
                }

            }
        }
    }


    if(row%2==0 && column%2==0){
        /*
        * x는 건너뛸 수 있는 곳
        * -> 가장 최소인 지점 스킵
        *   0 1 2 3
        * 0 s x . x
        * 1 x . x .
        * 2 . x . x
        * 3 x . x f
        * 
        * x가 아닌 곳을 건너뛸려면 다른 x가 포함될 수 밖에 없음
        */

        int row_idx = 0, column_idx = 0;
        int hardest_row = min_row % 2 ? min_row - 1 : min_row;
        

        for(; row_idx<hardest_row; row_idx += 2){
            for(int j=0; j<column; j++) cout << 'R';
            cout << 'D';
            for(int j=0; j<column; j++) cout << 'L';
            cout << 'D';
        } 

        for(int i=0; i<column - 1; i++){
            if( i == min_column ){
                cout << 'R';
            } 

            if(i%2 == 0){
                cout << "DR";
            }else{
                cout << "UR";
            }
        }

        for(; row_idx < row - 2; row_idx += 2){
            for(int j=0; j<column; j++) cout << 'L';
            cout << 'D';
            for(int j=0; j<column; j++) cout << 'R';
            cout << 'D';
        }

        for(int j=0; j<column; j++) cout << 'L';
        cout << 'D';
        for(int j=0; j<column; j++) cout << 'R';
           

    }else if(row%2==0){

        for(int i=0; i<column; i++){
            for(int j=0; j<row-1; j++){
                is_down ? cout << 'D' : cout << 'U';
            }

            if(i != column-1)
                cout << 'R';
            
            is_down = !is_down;
        }

    }else{

        for(int i=0; i<row; i++){
            for(int j=0; j<column-1; j++){
                is_right ? cout << 'R' : cout << 'L';
            }

            if(i != row-1)
                cout << 'D';

            is_right = !is_right;
        }

    }
    cout << '\n';


    return 0;
}

/*
입력
첫째 줄에 R과 C가 주어진다. (2 ≤ R, C ≤ 1000) 
둘째 줄부터 R개 줄에는 각 칸을 지나갈 때 얻을 수 있는 기쁨이 주어진다. 
이 값은 1000보다 작은 양의 정수이다.

출력
첫째 줄에 가장 가장 큰 기쁨을 주는 롤러코스터는 가장 왼쪽 위 칸부터 가장 오른쪽 아래 칸으로 어떻게 움직이면 되는지를 출력한다. 
위는 U, 오른쪽은 R, 왼쪽은 L, 아래는 D로 출력한다. 정답은 여러 가지 일 수도 있다.

예제 입력 1 
3 3
5 1 3
2 4 8
1 1 2
예제 출력 1 
RRDLLDRR
*/