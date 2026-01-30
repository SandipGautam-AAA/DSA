#include<stdio.h>

// Time Compexity -> O(n^2) , Best case -> O(n) : If array is already sorted
// Space Complexity -> O(1)
// We shift elemnt insted of swaping(Bubble sort)

// How it works:-
// Left side: already sorted
// Right side: unsorted elements waiting their turn

int main() {

    int arr[] = {10, 1, 7, 4, 8, 2, 11};

    int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i = 1; i < n; i++){ // We assume that first element is sorted
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > temp){
                // shift right
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