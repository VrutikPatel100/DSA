#include<stdio.h>
#include<stdlib.h>

struct Expense
{
    char date[11];
    char title[30];
    int amount;
    char category[30];
};

struct Expense e[50];
int index=0;

void addexpense(){
    printf("enter the title date amount category: ");
    // gets(e[index].title);
    scanf("%s%s%d%s",&e[index].title,&e[index].date,&e[index].amount,&e[index].category);
    index++;
}
 
void printexpense(){
    int i;
    for(i=0;i<index;i++){
        printf("\n %-10s   %-11s  %-5d  %-10s",e[i].title,e[i].date,e[i].amount,e[i].category);
    }
}

int main(){
    addexpense();
    addexpense();
    printexpense();
}
