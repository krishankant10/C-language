  
//Q28. Constructor overloading 
#include <iostream.h>
#include <conio.h> 
  
class construct 
{  
  
public: 
    float area;  
      
    // Constructor with no parameters 
    construct() 
    { 
        area = 0; 
    } 
      
    // Constructor with two parameters 
    construct(int a, int b) 
    { 
        area = a * b; 
    } 
      
    void disp() 
    { 
        cout<< area<< endl; 
    } 
}; 
  
void main() 
{ 
    clrscr();
    // Constructor Overloading  
    // with two different constructors 
    // of class name 
    construct o; 
    construct o2( 10, 20); 
      
    o.disp(); 
    o2.disp(); 
    getch();
}