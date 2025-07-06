#include <iostream>

using namespace std;

class Student
{
    public:
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
    cout << s1.name << endl;

    return 0;
}