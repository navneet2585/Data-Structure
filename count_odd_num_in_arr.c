// Write a function to count the number of odd numbers in an Array.

#include <stdio.h>

// function declartion
// function parameter-->( array, size of array)
int countOdd(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("No of odd items = %d", countOdd(arr,10));  // calling function 
}


// function defintion
int countOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){    // checking odd terms
            count++;
        }
    }

    return count;
}
