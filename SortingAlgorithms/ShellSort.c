#include<stdio.h>

int main(){

    int arr[] = {2, 40, 34, 13, 43, 42, 12, 22, 32, 46};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int gap = n/2; gap>0; gap = gap/2){
        for(int i = gap; i < n; i++ ){
            int temp = arr[i];
            int j;
            for( j = i; j >= gap; j = j-gap){
                if(temp < arr[j - gap]){
                    arr[j] = arr[j - gap];
                }
                else
                    break;
            }
            arr[j] = temp;

            /*
            OR with while Loop
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
            */

        }
    }

    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }


    return 0;
}