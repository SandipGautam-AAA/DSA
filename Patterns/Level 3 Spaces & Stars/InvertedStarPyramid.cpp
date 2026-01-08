/*
*********
 *******
  *****
   ***
    *
    */
   #include<iostream>

   int main() {

    int row{5},col{9};
    for(int i = 0; i <  row; i++){
        for(int j = 0; j < i; j++){
            std::cout << " ";
        }

        for(int j = 0; j < col - i*2; j++){
            std::cout << "*";
        }
        
        std::cout << std::endl;

    }

    return 0;
   }