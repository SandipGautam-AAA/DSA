/*
*****
****
***
**
*
*/

#include<iostream>

int main() {
    int col = {5}, row = {5};

    for(int i = 0; i< row; i++){
        for(int j = 0; j < col; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
        col--;
    }
}