#include <iostream>        //Q. 11
#include<conio.h>
using namespace std;
void b_search(int [], int, int, int);
void sort(int [], int);

int main()
{
    int key, size, i;
    int list[25];

    cout<<"Enter size of a list: ";
    cin>>size;
    cout<<"\nEnter Number's : ";
    for(i = 0; i < size; i++)
    {
        cin>>list[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<list[i]<<endl;
    }
    sort(list, size);
    cout<<"\n\n";
    cout<<"Enter key to search\n";
    cin>>key;
    b_search(list, 0, size, key);
    getch();
}

void sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
	for (j = i; j < size; j++)
	{
	    if (list[i] > list[j])
	    {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
	    }
	}
    }
}

void b_search(int list[], int lo, int hi, int key)
{
    int mid;

    if (lo > hi)
    {
	cout<<"Key not found\n";
	return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
	cout<<"Key found\n";
    }
    else if (list[mid] > key)
    {
	b_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
	b_search(list, mid + 1, hi, key);
    }
}
