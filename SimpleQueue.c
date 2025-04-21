
#include <stdio.h>
#include<stdlib.h>

#define S 5

int q[S];
int front = -1; // queue is empty
int rear = -1;  // queue is empty

void enQueue(int num)
{
    if (rear == S - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {

        rear++;
        q[rear] = num;
        if (front == -1)
        {
            front = 0;
        }
    }
}

void display()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf(" %d", q[i]);
    }
}

void deQueue()
{

    if (front == -1)
    {
        printf("\nQueue is Empty ! ");
    }
    else
    {
        printf("\n%d removed", q[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
}

int main()
{

    int choice;
    int num;
    while (1)
    {
        printf("\n1 For Add\n2 For Remove\n3 For Display\n0 For Exit\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            enQueue(num);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;

            case 0:exit(0);
        default:
            break;
        }
    }
    return 0;
}