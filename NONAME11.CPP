#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int num;
	printf("Enter any hexadecimal number:");
	scanf("%x",&num);
	printf("The input number in decimal is :");
	printf("%d",num);
	getch();
}