#include <iostream>

using namespace std;

int main(void){
    int width=0, height=0, i=0, j=0;
    char** board;

    cin >> height >> width;
    board = new char*[height];

    for(i=0; i<height; i++){
        board[i] = new char[width];
        for(j=0; j<width; j++){
            cin >> board[i][j];
        }
    }

    

    for(i=0; i<height; i++) delete[] board[i];
    delete[] board;

    return 0;
}