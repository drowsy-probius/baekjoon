#include <iostream>
#define MAX 100002

typedef struct _minheap{
  int tree[MAX];
  int size;
} minheap;

using namespace std;

minheap heap;

void insert(int n)
{
  int idx = ++heap.size;
  while(idx > 1 && heap.tree[idx/2] > n)
  {
    swap(heap.tree[idx], heap.tree[idx/2]);
    idx /= 2;
  }
  heap.tree[idx] = n;
}

int get()
{
  if(heap.size < 1)
  {
    return 0;
  }

  int idx = 1;
  int minval = heap.tree[idx];
  swap(heap.tree[idx], heap.tree[heap.size]);
  heap.size--;

  while(true)
  {
    // Assume children tree are completed binary min-heap tree.
    // right child exists
    if(idx*2 + 1 <= heap.size)
    {
      // find minimal child node
      int minchildidx = heap.tree[idx*2] < heap.tree[idx*2 + 1] ? idx*2 : idx*2 + 1;
      // if minimal child is smaller than parent
      if(heap.tree[minchildidx] < heap.tree[idx])
      {
        swap(heap.tree[idx], heap.tree[minchildidx]);
        idx = minchildidx;
      }
      // every children is bigger than parent
      else
      {
        break;
      }
      
    }
    else if (idx * 2 <= heap.size && heap.tree[idx*2] < heap.tree[idx])
    {
      swap(heap.tree[idx], heap.tree[idx*2]);
      idx = idx * 2;
    }
    else
    {
      break;
    }
  }

  return minval;
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  heap.size = 0;

  int t, n;
  cin >> t;
  while(t--)
  {
    cin >> n;

    if( n == 0 )
    {
      cout << get() << '\n';
    }
    else
    {
      insert(n);
    }
  }
  return 0;
}