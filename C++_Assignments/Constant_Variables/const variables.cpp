//const variable cannot be left uninitialized at the time of assignment.
//it cannot be assigned value anywhere in the program.
//explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.


#include <iostream>
using namespace std;

int main()
{
  const int SIDE = 50;
  int area;
  area = SIDE*SIDE;
  cout<<"The area of the square with side: " << SIDE <<" is: " << area << endl;
  system("PAUSE");
  return 0;
}