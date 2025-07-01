#include<iostream>

using namespace std;

int main(){
    
    vector<int> arr = {1,2};

    cout << &arr[0] << endl;
    arr[0] = 22;
    arr.push_back(222);
    cout << &arr[0] << arr[2] << endl;
    
    
return 0;
}
