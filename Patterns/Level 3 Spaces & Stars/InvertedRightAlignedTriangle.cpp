/*
*****
 ****
  ***
   **
    *
*/

#include<iostream>

int main() {

    int n{5}, col{5};

    for(int i = 0; i<n; i++){
        for(int k = 0; k < i; k++){
            std::cout << " ";
        }
        for(int j = 0; j < col; j++){
            std::cout << "*";
        }
        col--;
        std::cout << std::endl;
    }

    return 0;
}