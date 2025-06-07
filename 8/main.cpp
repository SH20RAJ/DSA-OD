#include<iostream>
using namespace std;

int main() {

    // int arr[5] = { 4, 78, 23, 57, 90};
    // int size = sizeof(arr)/ sizeof(arr[0]);

    // // finding smallest and largest in an array
    // int smallest = arr[0] , largest = arr[0];
    // for( int i = 0; i<size; i++ ){

    //     cout << "Loop no - " +rve i+ arr[i] << endl;

    //     if(arr[i] < arr[i+1]) {
    //         smallest = arr[i];
    //     } else if(arr[i] > arr[i+1]) {
    //         largest = arr[i];
    //     }
    //     cout << smallest << endl;
    //     cout << largest << endl;

    // }


    // cout << smallest << endl;
    // cout << largest << endl;

int arr[] = { 1,2,3};
printf("%lu %lu", sizeof(arr), sizeof(arr + 1));


return 0;
}