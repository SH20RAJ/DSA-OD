#include <iostream>

using namespace std;

class Student
{
    string name;
    string address;
    int rollno;

    void changeName(string newname)
    {
        name = newname;
    }
};

int main()
{

    Student s1;
    s1.changeName("Shaswat");
    // The above line will cause a compilation error because changeName is a private member function.
    // To fix this, we can make changeName a public member function.
    // Uncomment the following line to see the error:
    // s1.changeName("Shaswat");
    cout << "Hello, World!" << endl;
    // The above line will print "Hello, World!" to the console.
    

    return 0;
}