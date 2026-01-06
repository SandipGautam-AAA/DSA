/*
1
12
123
1234
12345
*/

#include<iostream>

int main() {

    int row{5}, col{1};

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){
            std::cout << j+1;
        }
        col++;
        std::cout << std::endl;
    }
}