
/*#include<stdio.h>
double i;

int main()
{
    (int)(float)(char) i;
    printf("%d", sizeof((int)(float)(char)i));
    return 0;
}
*/
/*#include<stdio.h>

int main()
{
    struct s1
    {
        char *z;
    int i;
    struct s1 *p;
    };
    static struct s1 a[] = {{"Nagpur", 1, a+1} , {"Chennai", 2, a+2} ,
                            {"Bangalore", 3, a} };

    struct s1 *ptr = a;
    printf("%s,", ++(ptr->z));
    printf(" %s,", a[(++ptr)->i].z);
    printf(" %s", a[--(ptr->p->i)].z);
    return 0;
}*/
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch, str[7];
    fp=fopen("kk.c", "r"); /* file 'try.c' contains "This is Nagpur" */
    fseek(fp, 9L, SEEK_CUR);
    fgets(str, 5, fp);
    puts(str);
    return 0;
}
#include<stdio.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
    return 0;
}
