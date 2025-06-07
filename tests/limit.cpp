#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> x(5);

    cout << "Hello World" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "No. - " << i << x.at(i) << endl;
    }

    return 0;
}