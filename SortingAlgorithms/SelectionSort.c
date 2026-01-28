#include<stdio.h>

int main(){
    int arr[] = {1, 7, 9, 2, 3, 0};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        // swap(arr[i], arr[minIndex])
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    printf("Sorted Array: ");
    for(int i = 0; i<n; i++){
        printf("%d  ", arr[i]);
    }
} 