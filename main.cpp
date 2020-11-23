#include <iostream>
#include <random>
#include <cstdio>
#define ROW 1000
#define COLUMN 1000

using namespace std;

const int SIZE = 10;
int _array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int _seg_tree[SIZE * 4] = {0, };


int init(int st, int ed, int idx)
{
    if(st == ed)
    {
        return _seg_tree[idx] = _array[st];
    }
    return _seg_tree[idx] = init( st, (st + ed) >> 1, idx * 2) + init( ( (st + ed) >> 1 ) + 1 , ed, idx * 2 + 1);
}

int sum(int st, int ed, int idx, int from, int to)
{
    if(from > ed || to < st)
    {
        return 0;
    }

    if(from <= st && ed <= to)
    {
        return _seg_tree[idx];
    }

    return sum(st, (st + ed) >> 1, idx * 2, from, to) + sum( ((st + ed) >> 1 ) + 1, ed, idx * 2 + 1, from, to);
}

int update(int st, int ed, int idx, int changedidx, int diff)
{
    if(changedidx < st || ed < changedidx)
    {
        return _seg_tree[idx];
    }
    _seg_tree[idx] += diff;
    if(st == ed) return _seg_tree[idx];
    update(st, (st + ed) >> 1, idx*2, changedidx, diff);
    update( ( (st + ed) >> 1) + 1, ed, idx*2+1, changedidx, diff);
    return 0;
}

int main(void){
    
    init(0, SIZE - 1, 1);

    cout << sum(0, SIZE - 1, 1, 0, 10) << "\n";
    cout << sum(0, SIZE - 1, 1, 0, 8) << "\n";
    cout << sum(0, SIZE - 1, 1, 4, 7) << "\n";

    update(0, SIZE - 1, 1, 8, 0);
    cout << sum(0, SIZE - 1, 1, 0, 8) << "\n";


    return 0;
}