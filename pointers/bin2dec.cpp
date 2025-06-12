#include <iostream>
using namespace std;

int bin2dec(int n){
    int dec = 0, power = 1;

    while (n > 0) {
        int lastno = n % 10;
        dec += lastno * power;

        power *= 10;
        n /= 10;
    }
}

// Main function to test the bin2dec function
int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int dec = bin2dec(n);
    cout << "Decimal representation: " << dec << endl;
    return 0;
}