#include <iostream>
using namespace std;

// Binary Search is only works on Monotonic Function(Sorted)
// Time Complexity O(log n)
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    
    while (start <= end)
    {
        // int mid = (start + end) / 2; // when start + end exceed the size of int(32-bit -> value = 2^31 - 1) it gives the error 
        int mid = start + (end - start)/2;

        if (key == arr[mid])
            return mid;

        // key is in left side
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        { // key > mid
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int odd[5] = {3, 5, 7, 9, 13};
    int even[6] = {4, 6, 9, 14, 15, 19};

    int oddindex = binarySearch(odd, 5, 9);
    cout << "Index of 9 -> " << oddindex << endl;

    int evenindex = binarySearch(even, 6, 4);
    cout << "Index of 4 -> " << evenindex << endl;

    return 0;
}