/*
*
**
***
****
*****
*/

#include<iostream>

int main() {

    int row = 5, col = 1;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << "*";
        }
        col++;
        std::cout << std::endl;
    }

    return 0;

}