// // dma-dynamic memory alocation

// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int *p;
//     int *a;

//     p =malloc(sizeof(int));  //4 byte
//     a=calloc(5,sizeof(int));  //array

//     //p = (int*)malloc(sizeof(int));

//     printf("enter no :-");
//     scanf("%d",&p);

//     printf("p = %d ",p);
//     free(p);


//     printf("\nenter no :-");
//     scanf("%d",&a);

//     printf("a = %d ",a);
//     free(a);

//     return 0;
// }

///--chatgpt  

#include <stdio.h>
#include <stdlib.h>

// Function to get data from the user
void getdata(int *arr, int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print all data
void printdata(int *arr, int size) {
    printf("\nArray elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to calculate and print the sum of all odd numbers
void oddsum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    printf("Sum of odd numbers: %d\n", sum);
}

int main() {
    int size = 5;
    
    // Dynamic memory allocation
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    getdata(arr, size);
    printdata(arr, size);
    oddsum(arr, size);

    // Free allocated memory
    free(arr);

    return 0;
}
