#include<iostream>
using namespace std;

// Time Complexity -> O(n)
int LinearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(key == arr[i])   
            return i;
    }
    return -1;
}

int main(){
    int arr[5] = {1, 4, 6, 15, 8};

    int index = LinearSearch(arr, 5, 15);
    cout << "15 is in index: " << index << endl;
    
    int index1 = LinearSearch(arr, 5, 16);
    cout << "16 is in index: " << index1;

}