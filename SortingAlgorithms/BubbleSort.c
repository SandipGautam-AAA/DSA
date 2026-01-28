#include<stdio.h>
#include<stdbool.h>

// Time Complexity -> O(n^2)   Best case-> O(n)
// Space Complexity -> O(1)
// In every ith round ith largest/smalest came to its place -> sorting is done by back of the array

// Flag isSwap is used to Optamize the program if the array is sorted(noSwap) before the i = n-1th round  SS
int main() {
    int arr[10] = {2, 40, 34, 13, 43, 42, 12, 22, 32, 46};
    
    int n = sizeof(arr)/ sizeof(arr[0]);
    // printf("%d", n);

    for(int i = 0; i < (n - 1); i++ ) {

        bool isSwap = false;
        for(int j = 0; j < (n - i - 1); j++) {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 

                isSwap = true;
            }
        }
        if(isSwap == false) // already sorted
            break;
        
    }

    for(int i = 0; i<n; i++){

        printf("%d  ", arr[i]);
    }

    return 0;
}