#include <stdio.h>
#define S 6

int a[] = {6,5,7,4,3,2};

void display()
{
    int i;
    for (i = 0; i < S; i++)
    {
        printf(" %d", a[i]);
    }
}

void selectionSort()
{
    int i, j, min,tmp;

    for (i = 0; i < S; i++)
    {
        min = i;
        for (j = i + 1; j < S; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp; 
    }
}
int main()
{

    printf("\nArray Before Sort : ");
    display();

    selectionSort();

    printf("\nArray After Sort : ");
    display();

    return 0;
}


