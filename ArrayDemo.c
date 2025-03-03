
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int arr[SIZE];

void add(int num, int location)
{
    arr[location - 1] = num;
}

void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeData(int location)
{
    arr[location - 1] = 0;
}

int main()
{
    printf("\n1 For add\n2 For Display\n3 For Delete\n0 For exit\nEnter choice");
    return 0;
}
