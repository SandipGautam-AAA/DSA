/*
5
54
543
5432
54321
*/

#include<iostream>

int main() {

    int row{5}, col{1};

    for(int i = 0; i < row; i++){
        for(int j = 5; j > row-col; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
        col++;

    }
}