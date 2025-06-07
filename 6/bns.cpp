#include <iostream>
using namespace std;

int DecimaltoBinary(int n)
{
    if (n == 0)
        return 0;
    return n % 2 + 10 * DecimaltoBinary(n / 2);
}
int main()
{

    cout << DecimaltoBinary(50) << endl;
    return 0;
}