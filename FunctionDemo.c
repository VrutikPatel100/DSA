#include<stdio.h>

void add();

void sub(int a,int b){
    int ans = a-b;
    printf("\n ans :- %d",ans);
}

int main()
{
    // clrscr -> input ? no , output ? no 
    
    add();  //call
    sub(20,4);  //call

    return 0;
}

// define
void add()
{
    int a;
    int b;
    int ans;

    printf("\n enter two numbers:-");
    scanf("%d%d",&a,&b);

    ans =a+b;
    printf("\n add:- %d",ans);
    
}