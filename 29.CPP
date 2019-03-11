//Q29. member initrialize
#include<iostream.h>
#include <conio.h>  
  
class Point { 
private:
    int x;
    int y;
public:
    Point(int i = 0, int j = 0):x(i), y(j) {}

    int getX()
    {
	return x;
    }
    int getY()
    {
	return y;
    }
};

void main()
{
  clrscr(); 
  Point t1(10, 15); 
  cout<<"x = "<<t1.getX()<<", "; 
  cout<<"y = "<<t1.getY(); 
  getch(); 
} 
  