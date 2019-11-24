#include<stdio.h>

int main()
{
    char huge *near *far *ptr1;
    char near *far *huge *ptr2;
    char far *huge *near *ptr3;
    printf("%d, %d, %d\n", sizeof(ptr1), sizeof(*ptr2), sizeof(**ptr3));
    return 0;
}