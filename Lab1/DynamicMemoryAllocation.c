/*3. Write a C program to dynamically allocate an array of integers, read values into it,
 print the sum, reallocate the memory and then free the allocated memory.*/


 #include<stdio.h>
 #include<stdlib.h>

 int main() {
    int n;
    int sum=0;

    printf("Enter the num of element: ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));

    printf("Enter the numbers: \n");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Index\tNumber\n");
    for(int i = 0; i<n; i++) {
        printf("%d\t%d\t\n", i, arr[i]);
    }
    
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    
    printf("Sum = %d\n", sum);
    
    
    arr = (int*) realloc(arr, 2*n*sizeof(int));
    printf("Enter other %d members(After realloc() ):\n", n);
    
    for(int i = n; i< 2*n; i++) {
        
        scanf("%d", &arr[i]);
    }
    
    printf("Index\tNumber\n");
    for(int i = n; i< 2*n; i++) {
        printf("%d\t%d\t\n", i, arr[i]);
    }
    free(arr);
    return 0;
 }