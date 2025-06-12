#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> heights = {1, 8, 6, 2, 5, 4, 7, 3};
    // 35
    int size = heights.size();
    int maxArea = 0;
    int left = 0, right = size-1;
    for (int i = 0; i < size; i++)
    {
        cout << "left = " << left << " right = " << right << " i = " << i << " maxarea = " << maxArea << endl;
        int minheight = min(heights[right], heights[left]);

        int width = (right - left);
        cout << " Heights = " << heights[left] << heights[right] << minheight << "widtht" << width << endl;
        int area = width * minheight;
        maxArea = max(maxArea,area );
        cout << "maxarea = " << maxArea << " area = " << area << endl;

        if (heights[left] > heights[right])
        {
            right = right -1;
            cout << "right is decreases" << right << endl ;
        }
        else
        {
            left++;
            cout << "left is increated" << left << endl;
        }

        cout << "--------------------------\n";
    }

    cout << "Answer = " << maxArea << endl;

    return 0;
}
