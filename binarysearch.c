// #include<stdio.h>
// #define size 5;

// int a[] = {12,34,56,78,90};

// void binarysearch(int search) {
//     int min=0,max=size-1;
//     int mid;
//     int found =0;

//     while (min <= max){
//         mid = (min + max) / 2;
//         if(search == a[mid]){
//             found = 1;
//             break;
//         }
//         else if(search > a[mid]){
//             min = mid + 1;
//         }else if(search < a[mid]){
//             max = mid - 1;
//         }
//     }

//     if(found == 0){
//         printf("\n %d Number not found",search);
//     }else{
//         printf("\n %d Number Found",search);
//     }
// }

// int main() {
//     binarysearch(20);
//     binarysearch(30);
//     binarysearch(90);

//     return 0;
// }



#include<stdio.h>
#define size 5;

int a[] ={12,34,56,78,90};

void binarysearch(int search){
    int min = 0,max = size -1;
    int mid;
    int found = 0;

    while(min <= max)
    {
        mid = (min + max) / 2;
        if(search ==a[mid])
        {
            found = 1;
            break;
        }
        else if(search > a[mid])
        {
            min = mid + 1;
        }else if(search < a[max])
        {
            max = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("\nNumber Found",search);
    }
    else
    {
        printf("\nNumber Not Found",search);
    }
}


int main()
{
    binarysearch(20);
    binarysearch(30);
    binarysearch(90);

    return 0;

}
