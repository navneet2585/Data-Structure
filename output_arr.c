
// int arr[] = {1,2,3,4,5}
// for the given array, wht will the following give?

// a) *(arr + 2)

// a) *(arr + 5)

#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d \n", *(arr + 2));  //3
    printf("%d \n", *(arr + 4));  //5
    printf("%d \n", *(arr + 5));  //why 36
 
    return 0;
}
