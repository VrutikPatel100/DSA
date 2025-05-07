#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Expense
{

    char date[11];
    char title[30];
    int amount;
    char category[30];
};

struct Expense e[50];
int index = 0;

void addExpense()
{

    printf("Enter Title , date , amount , category :");
    scanf("%s %s %d %s", &e[index].title, &e[index].date, &e[index].amount, &e[index].category);

    index++;
}

void printExpense()
{
    int i;
    for (i = 0; i < index; i++)
    {
        printf("\n%s %s %d %s", e[i].title, e[i].date, e[i].amount, e[i].category);
    }
}

void sum()
{

    int totalAmt = 0;
    int foodAmt = 0;
    for (int i = 0; i < index; i++)
    {

        totalAmt = totalAmt + e[i].amount;

        if (stricmp(e[i].category, "Food") == 0)
        {
            foodAmt = foodAmt + e[i].amount;
        }
    }
    printf("\nFood Amount : %d", foodAmt);

    printf("\nTotal Amount : %d", totalAmt);
}

int main()
{

    int choice;
    while (1)
    {

        printf("\n1 addExpense ");
        printf("\n2 PrintExpense ");
        printf("\n3 Sum");
        printf("\n0 exit");
        printf("\nEnter The Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addExpense();
            break;

        case 2:
            printExpense();
            break;

        case 3:
            sum();
            break;

        case 0:
            exit(0);
        }
    }

    return 0;
}