// 1.add student
// 2.list Student
// 3.exit

// 1 - enter rollnum and name
//     2                 laxman
    
// enter marks of three subjects:
// 95
// 85
// 72

// 1

// 1.add student
// 2.list Student
// 3.exit

// 2.

// ram      98  58  62    98  58 = 218
// laxman   95  85  72    95  72 = 252



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct Student
// {
//     char name[30];
//     int rollno[100];
//     int maths;
//     int science;
//     int english;
//     int minMarks;
//     int maxMarks;
//     int totalObtain;
// }

// struct student s[50];
// int index = 0;

// void addStudent()
// {
//     printf("enter name , rollno , maths , science ,english");
//     scanf("%s %d %d %d %d" , &s[index].name , &d[index].rollno , &d[index].maths , &d[index].science , &d[index].english);

//     index++;

// }

// void printstudent();
// {
//     int i;
//     for(i=0;i< index; i++)
//     {
//         printf("%s %d %d %d %d", s[i].name s[i].rollno , s[i].maths , s[i].science , s[i].english);
//     }
// }
// int main(){
//     addStudent();
//     printStudent();
// }




#include <stdio.h>

struct Student
{
    char studentName[50];
    int math;
    int sci;
    int eng;
    int minMarks;
    int maxMarks;
    int totalObtain;
};

struct Student t[30]; 
int studentCount = 0; 

void addStudent()
{
    int n;
    printf("How many students do you want to add? ");
    scanf("%d", &n);

    for (int i = studentCount; i < studentCount + n; i++)
    {
        printf("\nEnter the Name: ");
        scanf("%s", t[i].studentName);

        printf("Enter Math marks: ");
        scanf("%d", &t[i].math);

        printf("Enter Science marks: ");
        scanf("%d", &t[i].sci);

        printf("Enter English marks: ");
        scanf("%d", &t[i].eng);

        
        t[i].minMarks = t[i].math;
        if (t[i].sci < t[i].minMarks)
            t[i].minMarks = t[i].sci;
        if (t[i].eng < t[i].minMarks)
            t[i].minMarks = t[i].eng;

        t[i].maxMarks = t[i].math;
        if (t[i].sci > t[i].maxMarks)
            t[i].maxMarks = t[i].sci;
        if (t[i].eng > t[i].maxMarks)
            t[i].maxMarks = t[i].eng;

        t[i].totalObtain = t[i].math + t[i].sci + t[i].eng;
    }
    studentCount += n;
}

void listStudent()
{
    if (studentCount == 0)
    {
        printf("\nNo students added yet.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++)
    {
        printf("\n==============================\n");
        printf("Name         : %s\n", t[i].studentName);
        printf("Math         : %d\n", t[i].math);
        printf("Science      : %d\n", t[i].sci);
        printf("English      : %d\n", t[i].eng);
        printf("Min Marks    : %d\n", t[i].minMarks);
        printf("Max Marks    : %d\n", t[i].maxMarks);
        printf("Total Obtain : %d\n", t[i].totalObtain);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1) Add Student");
        printf("\n2) Display Students");
        printf("\n0) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            listStudent();
            break;

        case 0:
            return 0;

        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }
}