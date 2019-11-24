#include <iostream.h>
#include <conio.h>
const double array_size=10;
class vector
{
      private:
	int *array;
      public:
      void *operator new(size_t size)
      {
	vector *my_vector;
	my_vector=::new vector;
	my_vector->array=new int[array_size];
	return my_vector;
      }
      void operator delete (void * vec)
      {
	vector *my_vect;
	my_vect=(vector *) vec;
	delete (int *)my_vect->array;
	::delete vec;
      }
      void read();
      int sum();
};
void vector::read()
{
     for(int i=0;i<array_size;i++)
     {
       cout<<"vector["<<i<<"]=?";
       cin>>array[i];
     }
}
int vector::sum()
{
	int sum=0;
	for(int i=0;i<array_size;i++)
	  sum+=array[i];
	return sum;
}
void main()
{
	clrscr();
	vector *my_vector=new vector;
	cout<<"Enter Vector Data...."<<endl;
	my_vector->read();
	cout<<"Sum Of vector="<<my_vector->sum();
	delete my_vector;
	getch();
}




