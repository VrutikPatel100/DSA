#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int arr[5];

int main()
{

    int num;
    int location;
    int i;
    int choice;

    while (1)
    {
        printf("\n1 For Add");
        printf("\n2 For Display");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); // 1 2 0

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num); // 10

            printf("\nEnter location");
            scanf("%d", &location); // 5
            arr[location - 1] = num;

            break;
        case 2:

            for (i = 0; i < SIZE; i++)
            {
                printf(" %d", arr[i]);
            }
            break;
        case 0:
            exit(0);
        default:
            break;
        } // switch
    } // while

    //

    return 0;
}