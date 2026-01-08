/*
    *
   ***
  *****
 *******
*********
*/


#include<iostream>

int main() {

    int row{1}, col{5};
    for(int i = 0; i<row; i++){
        for(int j = 0; j < col - i - 1; j++){
            std::cout << "1";
        }
        // for(int k = 0; k <= row; k++){
        //     std::cout << "*";
        // }
        row++;
        std::cout << std::endl;
    }
    return 0;
}