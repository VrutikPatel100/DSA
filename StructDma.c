#include<stdio.h>



struct Student{
    char studentName[30];
    int maths,sci,eng;
    float percentage;
};


int main(){

    //SMA : static memory allocation 
            // int a;//4 byte  
    //DMA : dynamic memory allocation  
    struct Student s;//object   
    struct Student t[30]; //0...29 => total 30 t[0]:{30+12+4=>46}=30*46=>
    int i;

    for(i=0;i<2;i++){
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d",&t[i].studentName,&t[i].maths,&t[i].sci,&t[i].eng); 

        t[i].percentage = (t[i].maths + t[i].sci + t[i].eng )/3.0; 
    }

    for(i=0;i<2;i++){
    
        printf("\n %s  %d %d %d %f ",t[i].studentName,t[i].maths,t[i].sci,t[i].eng,t[i].percentage);

    }

    return 0; 
}  