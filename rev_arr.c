// Write function to reverse an array.
// 1,2,3,4 --> 4,3,2,1

// we'll exchange the term of an array.

#include <stdio.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6};
    reverseArray(arr, 6);
    // printArray(arr, 6);
    
    return 0;
}

// function for printing an array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

// function for reversing an array
void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printArray(arr,n);
}
