#include <iostream>
#include <vector>
using namespace std;


void print(){

}

int main()
{
    vector<vector<int> > arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i = arr.size();
    int j = arr[0].size();
    int count = 0;
    int r = j - 1, d = i - 1, u = 0, b = 0;

    while (count < i * j)
    {

        for (int k = 0; k <= r; k++)
        {
            cout << arr[u][k] << endl;
        }

        print(arr);

        count++;
    }

    return 0;
}
