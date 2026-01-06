/*
1
22
333
4444
55555
*/

#include<iostream>

int main() {
    int row{5}, col{1};

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << i+1;
        }
        col++;
        std::cout << std::endl;

    }
}