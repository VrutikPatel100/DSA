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

void insertionSort(){

    int i , j ,tmp;

    for(i=1;i<S;i++)
    {
        tmp = a[i];

        for(j= i -1; j >= 0;j--)
        {
            if(a[j] > tmp)
            {
                a[j+1] = a[j];
            }
            else
            {
                break;
            }

        }
        a[j+1] = tmp;
    }

}
int main()
{

    printf("\nArray Before Sort : ");
    display();

    insertionSort();

    printf("\nArray After Sort : ");
    display();

    return 0;
}







// big 0
