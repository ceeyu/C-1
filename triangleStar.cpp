#include <iostream>

using namespace std;
void spaceStar(int space, int star);

int main()
{
  int x, i;
  cin >> x;
  
  for( i=0; i<x; i++ )
    spaceStar(x-i-1, i*2+1);
 
  return 0;
}

void spaceStar(int space, int star)
{
  int i;
  for(i=0; i<space; i++ )
    cout << " ";
  for(i=0; i<star; i++ )
    cout << "*";
  cout << endl;
}