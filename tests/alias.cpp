#include<iostream>
using namespace std;


void changeA(int & b) {
    b = 10;
}

int main() {


    int a = 5;

    int *b = &a;

    changeA(a);

    cout << *&a << *b << endl;

    std::cout << a << std::endl;

    return 0;
}