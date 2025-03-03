#include <stdio.h>
#include <stdlib.h> 
#define SIZE 5

    int arr[5];
    int num,location,i;
   

void Add()
{
    printf("\nEnter number");
    scanf("%d", &num);

    printf("\nEnter location");
    scanf("%d", &location); 
    arr[location - 1] = num;
}
void Disply()
{
    
    for (i = 0; i < SIZE; i++)
    {
        if(arr[i] != 0)
        printf(" %d", arr[i]);
    }
}
void Remove()
{
    printf("Enter number : remove");
    scanf("%d" ,&location);
    // arr[location - 1] = 0;
}

void search(){
    int i;
    int found = 0;
    printf("\nEnter number u wanu to search");
    scanf("%d", &num);

    for (i=0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
        }

    }
    if (found == 1)
    {
        printf("\n found");
    }
    else{
        printf("\nNot found");
    }
    
 
}
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
        printf("\n3 For Remove");
        printf("\n4 search number");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); 

        switch (choice)
        {
        case 1:

            Add();
            break;
        case 2:
            
            Disply();
            break;

        case 3:

            Remove();
            break;

        case 4:
            search();
            break;
        case 0:
            exit(0);
        default:
            break;
        } 
    } 

    return 0;
}