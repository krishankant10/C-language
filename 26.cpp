//Q26. perameter rised constructor
#include<iostream.h>
#include <conio.h>
  
class Point 
{ 
    private: 
        int x, y; 
    public: 
        // Parameterized Constructor 
        Point(int x1, int y1)  
        {  
            x = x1;  
            y = y1;  
           } 
      
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
    // Constructor called 
    Point p1(10, 15);  
  
    // Access values assigned by constructor 
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); 
  
    getch(); 
} 