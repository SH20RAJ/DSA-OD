#include<iostream>
using namespace std;

int main() {





    // int arr[] = {71, 52, 33, 24, 35};
    // int* ptr = arr; // This line is incorrect, it should be an array of integers

    // int * ptr[] = arr;


    // std::cout << &arr[4] - &arr[3] << std::endl;
    // std::cout << *arr+2 << " " << arr[2] << std::endl;


    int a = 5;
    int * p = &a;
    int * p2 = &a;

    cout << *p << *p2 << endl;
    return 0;
}