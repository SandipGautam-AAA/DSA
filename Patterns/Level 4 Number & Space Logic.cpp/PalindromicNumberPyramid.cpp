/*
    1
   121
  12321
 1234321
123454321
*/


#include<iostream>

using namespace std;


int main(){

    int row{5};

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row - i; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << j + 1 ;
        }
        for(int j =  i + 1; j > 1; j--){
            cout << j - 1;
            
        }

        cout << endl;
    }

    return 0;
}