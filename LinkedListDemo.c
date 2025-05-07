#include<stdio.h>
#include<stdlib.h>

struct node
{
    char name[20];
    int age;
    struct node *next;
    
}*head = NULL , * last = NULL;

int main()
{
    head = malloc(sizeof(struct node));
    printf("Enter name and age:-");
    scanf("%s%d", &head->name ,&head->age);
    head->next = NULL;

    printf("\nname = %s" , head->name);
    printf("\nage = %d" , head->age);

    last = head;

    return 0;
}