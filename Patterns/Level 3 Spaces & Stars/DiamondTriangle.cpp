/*
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>

int main() {
    int row{5};

    for(int i = 0; i < row; i++){
        for(int j = 0; j <= i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < row - 1; i++){
        for(int j = 0; j < row - i -1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}