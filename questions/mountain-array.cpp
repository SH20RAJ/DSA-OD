#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 3, 8, 9, 5, 2};
    int n = 6;
    int s = 1, e = n - 2;
   while(s<=e){
            int mid = s + (e-s)/2;

            if(arr[mid-1]<arr[mid] && arr[mid+1] < arr[mid]){
                cout << "Peak found at index: " << mid << endl;
                return mid;
            } else if(arr[mid-1] < arr[mid]){
                s = mid+1;
            } else if(arr[mid+1] < arr[mid]){
                e = mid -1;
            }

        }
    return 0;
}
