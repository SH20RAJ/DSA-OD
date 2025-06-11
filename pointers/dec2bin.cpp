#include<iostream>
#include<bitset>
using namespace std;
// Function to convert decimal to binary using bitset
string dec2bin(int n) {
    // Create a bitset of size 32 (for 32-bit integers)
    bitset<32> b(n);
    // Convert the bitset to a string and return it
    return b.to_string();
}

// Main function to test the dec2bin function   
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    string binary = dec2bin(n);
    cout << "Binary representation: " << binary << endl;
    return 0;
}