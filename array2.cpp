#include <iostream>
using namespace std;

int main()
{
  const int N = 10;
  int numbers[N] = {5, 7, 2, 4, 6, 7, 10, 1, 3, 9};
  // 5th 7,6

  for(int i=0; i<N/2; i++)
    swap( numbers[i], numbers[N-i-1]);

    for(int v: numbers)
      cout << v << "\t";
    cout << endl;
    
}