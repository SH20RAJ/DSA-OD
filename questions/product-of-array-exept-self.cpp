#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4}; // 24 , 12 , 8 , 6
    int size = arr.size();
    vector<int> ans(size, 1);

    cout << " 1, 2 , 3, 4" << endl;

    // Brut Approach

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     aarr[i] = 1;
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //        (i!=j)?aarr[i]*=arr[j]:NULL;
    //     }

    // }

    // Optimal Approach

    // prefix 1 1 2 6
    for (int i = 1; i < size; i++)
    {
        ans[i] = ans[i - 1] * arr.at(i - 1);
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " , ";
    }

    cout << endl;
    // suffix 

    for (int i = size - 2; i > 0; i--)
    {
        ans[i] = ans[i+1] * arr[i + 1];
        cout << "answer in loop " << ans[i] << " , " << i << " " << arr[i]<< endl;
    }

    // print answer

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " , ";
    }

    return 0;
}
