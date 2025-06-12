#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> arr = { 1,3,5,78,90};

    int target = 5;
    int size = arr.size(), l = 0 , r = size -1;
    while(l<r){
       int mid = (l+r)/2;

       if(arr.at(mid) == target){
        cout << "Target Found at " << mid << endl;
        return 1;
       } else if(arr.at(mid) > target){
        r = mid;
       } else {
        l = mid;
       }
    }
    
    
    
    
return 0;
}
