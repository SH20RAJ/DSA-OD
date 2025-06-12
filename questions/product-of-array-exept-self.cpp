#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> aarr = arr;


    // Brut Approach

    for (int i = 0; i < arr.size(); i++)
    {
        aarr[i] = 1;
        for (int j = 0; j < arr.size(); j++)
        {
           (i!=j)?aarr[i]*=arr[j]:NULL;
        }
        
    }


    // print answer

    for (int i = 0; i < arr.size(); i++)
    {
       cout << aarr[i] << " , " ;
    }
    

    
    
    
return 0;
}
