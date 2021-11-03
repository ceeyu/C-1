#include <iostream>

using namespace std;
int main()
{
  int in;
  cin>>in;
  if(in==1)
  {
    cout<<"0"<<endl;
    return 0;
  }
  
  for (int i=2;i<in;i++)
    if(in%i==0)
    {
      cout<<"0"<<endl;
      return 0;
    }
cout <<"1"<<endl;
return 0;
}