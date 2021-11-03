#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream inStream;
  ofstream outStream;

  inStream.open("3.in");
  outStream.open("4.out");

  char c;

  while (inStream >> c)
  {
    outStream << (char)(c ^ 'a');
  }
  outStream << endl;

  inStream.close();
  outStream.close();

  return 0;
}