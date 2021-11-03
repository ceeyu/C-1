#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

char toUpperCase(char ch);

int main()
{
  ifstream inStream;
  ofstream outStream;

  inStream.open("3.in");
  outStream.open("3.out");

  char c;

  while (inStream >> c)
  {
    outStream << toUpperCase(c);
  }

  inStream.close();
  outStream.close();

  return 0;
}
char toUpperCase(char ch)
{
  if (ch <= 'z' && ch >= 'a')
  {
    ch = ch - 'a' + 'A';
  }
  return ch;
}