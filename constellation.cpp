#include <iostream>

using namespace std;

int main()
{
  int m, d;
  
  cin >> m >> d;
  
  if( (m==1 && d >=21) || ( m==2 && d<=19 ))
    cout << "Aquarius";
  if( (m==2 && d >=20) || ( m==3 && d<=20 ))
    cout << "Pisces";
  if( (m==3 && d >=21) || ( m==4 && d<=19 ))
    cout << "Aries";
  if( (m==4 && d >=20) || ( m==5 && d<=20 ))
    cout << "Taurus";
  if( (m==5 && d >=21) || ( m==6 && d<=21 ))
    cout << "Gemini";
  if( (m==6 && d >=22) || ( m==7 && d<=22 ))
    cout << "Cancer";
  if( (m==7 && d >=23) || ( m==8 && d<=22 ))
    cout << "Leo";
  if( (m==8 && d >=23) || ( m==9 && d<=22 ))
    cout << "Virgo";
  if( (m==9 && d >=23) || ( m==10 && d<=23 ))
    cout << "Libra";
  if( (m==10 && d >=24) || ( m==11 && d<=21 ))
    cout << "Scorpio";
  if( (m==11 && d >=22) || ( m==12 && d<=20 ))
    cout << "Sagittarius";
  if( (m==12 && d >=21) || ( m==1 && d<=20 ))
    cout << "Capricorn";
  
  cout << endl;
}