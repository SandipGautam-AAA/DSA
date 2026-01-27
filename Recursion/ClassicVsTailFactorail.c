#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)   // base case
        return 1;
    else
        return n * factorial(n - 1);
}

// tail recursion
int fact(int n, int a){
    if(n == 0)
        return a;
    else    
        return fact(n - 1, n*a);
}

// optimize 
// int fact(int n) {
//     int acc = 1;
//     while (n > 0) {
//         acc *= n;
//         --n;
//     }
//     return acc;
// }

int main()
{
    int num, a = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, fact(num, a));
    return 0;
}
