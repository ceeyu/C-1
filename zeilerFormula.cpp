#include <iostream>

using namespace std;

int main()
{
  	int yy, m, d, c, y, w;
  	bool oldOne;
  
  	cin >> yy >> m >> d;

  	if( yy <1582 || (yy==1582 && m < 10) || (yy==1582 && m == 10 && d <=4) )
		oldOne=true;
  	else
      	oldOne=false;
  
  	if( m<=2 )
    {
      yy--;
      m+=12;
    }
  	y=yy%100;
    c=yy/100;
  
  	if( oldOne )
	  	w=(y+y/4-c+2*m+(3*(m+1))/5+d-1)%7;
 	else
      	w=(y+y/4+c/4-2*c+2*m+(3*(m+1))/5+d+1)%7;
    w = ( w % 7 + 7 ) % 7;
    cout << w <<endl;
}