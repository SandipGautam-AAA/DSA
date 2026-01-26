#include<iostream>
#include<vector>
using namespace std;

int main() {
    // // vector<int> marks;  // Empty vector
    // vector<char> v(5);  // 0 0 0 0 0(default values) bool->false, flaoat->0.0
    // // vector<int> marks(5, 50); // 50 50 50 50 50

    // // vector<int> v = {1, 2, 3, 4};

    // for(auto i = v.begin(); i != v.end(); i++){
    //     cout << *i << " ";
    // }

    // vector<int> v(5, 30); // v -> 30 30 30 30 30
    // vector<int> v{1, 2, 3}; // 2^n
    // cout << v.capacity(); 

    
    vector <int> ram {1,2,3};
    vector <int> hari(ram);
    for(auto i = hari.begin(); i != hari.end(); i++){
        cout << *i << " ";
    }

    int arr[4];

    int n = sizeof(arr)/ sizeof(arr[0]);

    copy(ram.begin(), ram.end(), arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
