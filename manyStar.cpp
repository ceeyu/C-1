#include <iostream>

using namespace std;
int main()
{
  int x;
  int i,j;
  cin>>x;
  
  for (i=0;i<x;i++)
  {
    for (j=0;j<i;j++)
      cout<<" ";
    for (j=0;j<x;j++)
      cout<<"*";
    
    cout<<endl;
  }
}