#include<stdio.h>

int main() {

    int arr[] = {10, 1, 7, 4, 8, 2, 11};

    int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i = 0; i < n; i++){ // We assume that first element is sorted
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > temp){
                // shift
                arr[j + 1] = arr[j];
            }
            else // stop;
                break;
        }
        arr[j + 1] = temp;

    }

    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}