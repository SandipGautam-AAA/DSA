/*
1
2 3
4 5 6
7 8 9 10
*/


#include<iostream>

int main() {

    int n{4}, x{1};

    for(int i = 0; i<n; i++){
        for(int j =0; j <= i; j++){
            std::cout << x++ << " ";
        }
        std::cout << std::endl;
    }
}