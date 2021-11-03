#include <iostream>
#include <cmath>

using namespace std;

bool isPrime( int number);

int main()
{
  	int i, x;
  
  	cin >> x;
  	for( ; x>2; x-- )
    {
      if( isPrime( x ) )
        break;
    }
  
  	cout << x <<endl;
  	return 0;
}

bool isPrime( int number)
{
  int i, sqrtValue;
  
  if( number <2 )
    	return false;
  sqrtValue=sqrt(number);
  for( i=2; i<=sqrtValue; i++ )
  {
  	if( number % i == 0 )
      return false;
  }
  return true;
}