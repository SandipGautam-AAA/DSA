/*
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>

int main() {
    int col{1}, row{5};

    for(int i = 0; i < row; i++){

        char letter = 'A' + i;
        for(int j = 0; j < col; j++){    //j <= i
           std::cout << letter; 

        }
        std::cout << std::endl;
        col++;

    }

}