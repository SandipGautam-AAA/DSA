/*
Binary Triangle

1
01
101
0101
10101
*/

#include<iostream>
using namespace std;

int main() {
    int row{5};

    for(int i = 0; i<row; i++){
        for(int j = 0; j <=i; j++){
        
            if((j + i) % 2 == 0){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}