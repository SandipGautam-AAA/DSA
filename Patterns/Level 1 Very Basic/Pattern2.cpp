/*
*****
*/

#include<iostream>

int main() {
    int row = 1, col = 5;

    for (int i = 0; i < row; i++) {
        for(int j =0; j < col; j++){
            std::cout << "*";
        }
    }


    return 0;
}