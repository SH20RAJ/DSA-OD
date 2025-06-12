#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7,8,9,100,200};
    // 49
    int size = heights.size();
    int maxArea = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << "i = " << i << " j = " << j << " maxarea = " << maxArea << endl ;
            maxArea = max(maxArea, (j - i) * min(heights.at(j), heights.at(i)));
        }
    }

    cout << maxArea << endl;

    return 0;
}
