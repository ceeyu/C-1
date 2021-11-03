#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int list[100];
  int i;
  int max, min, total=0;
  double average;
  double sdTotal=0;
  
  int x;
  cin >> x;
  srand(x);
  
  max=99, min=1001;  
  for( i=0; i<100; i++ )
  {
    list[i]=rand()%901+100;
    if( list[i] > max )
      max=list[i];
    if( list[i] < min )
      min=list[i];
    total+=list[i];
  }
  
  average=total/100.0;
  
  for( i=0; i<100; i++ )
    sdTotal+=(list[i]-average)*(list[i]-average);
  cout << max <<endl;
  cout << min << endl;
  cout << average << endl;
  cout << sqrt(sdTotal/100) << endl; 
  
  return 0;
  
}