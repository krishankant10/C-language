2. Solution : The error will occur in the line int array1[const1] because we cannot allocate an array of constant size 0 in "int array1[const1];"
The const parameter of a function cannot be used to specify the size of an array.

The correct program is:

void display()
{
	const int const1=5
	const int const2=5;
	int array1[const1];
	int array2[const2];
	for(int i=0; i<5; i++)
	{
		array1[i] = i;
		array2[i] = i*10;
		cout << array1[i] << ' ' << array2[i] << ' ' ;
	}
}
void main()
{
	display();
}
