#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> arr = { 1,3,5,78,90,799,999};

    int target = 90;
    int size = arr.size(), l = 0 , r = size -1;
    while(l<r){
        int mid = (l+r)/2;
        // cout << l << " " << r << " " << mid << endl ;

       if(arr.at(mid) == target){
        cout << "Target Found at " << mid << endl;
        return 1;
       } else if(arr.at(mid) > target){
        r = mid;
       } else if(arr.at(mid) < target){
        l = mid;

       }
    //    return -1;
    }
    
    return 0;
}
