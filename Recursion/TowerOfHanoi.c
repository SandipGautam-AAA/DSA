#include <stdio.h>

// No. of steps -> (n^2) - 1 
//Time Complexity -> O(n^2)
//Space Complexity -> O(n)
void hanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)    // base case
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    hanoi(n - 1, source, auxiliary, destination); // move n-1 nunbers of disk source to auxiliry using destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    hanoi(n - 1, auxiliary, destination, source);   // move remining(n-1) disk at target from auxiliry using source 
}

int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
