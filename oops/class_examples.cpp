/*
===============================================================================
C++ Classes: Chapter-wise Examples (Beginner to Advanced)
===============================================================================

CHAPTER 1: Basic Class and Object
CHAPTER 2: Constructors and Destructors
CHAPTER 3: Access Specifiers (public, private, protected)
CHAPTER 4: Member Functions (Inside & Outside Class)
CHAPTER 5: Static Members
CHAPTER 6: Friend Functions
CHAPTER 7: Inheritance (Single, Multilevel)
CHAPTER 8: Polymorphism (Function Overriding, Virtual Functions)
CHAPTER 9: Encapsulation (Getters/Setters)
===============================================================================
*/

#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------------------------------------
// CHAPTER 1: Basic Class and Object
// -----------------------------------------------------------------------------
class Basic {
public:
    int data;
    void show() {
        cout << "[Basic] Data: " << data << endl;
    }
};

// -----------------------------------------------------------------------------
// CHAPTER 2: Constructors and Destructors
// -----------------------------------------------------------------------------
class WithConstructor {
public:
    int value;
    // Default constructor
    WithConstructor() : value(0) {
        cout << "[WithConstructor] Default constructor called\n";
    }
    // Parameterized constructor
    WithConstructor(int v) : value(v) {
        cout << "[WithConstructor] Parameterized constructor called\n";
    }
    // Destructor
    ~WithConstructor() {
        cout << "[WithConstructor] Destructor called\n";
    }
};

// -----------------------------------------------------------------------------
// CHAPTER 3: Access Specifiers (public, private, protected)
// -----------------------------------------------------------------------------
class AccessDemo {
private:
    int secret;
protected:
    int semiSecret;
public:
    int open;
    AccessDemo() : secret(1), semiSecret(2), open(3) {}
    int getSecret() { return secret; }
};

// -----------------------------------------------------------------------------
// CHAPTER 4: Member Functions (Inside & Outside Class)
// -----------------------------------------------------------------------------
class MemberFuncDemo {
    int x;
public:
    void setX(int val); // Declaration
    int getX() { return x; } // Inline definition
};
void MemberFuncDemo::setX(int val) { // Outside class definition
    x = val;
}

// -----------------------------------------------------------------------------
// CHAPTER 5: Static Members
// -----------------------------------------------------------------------------
class StaticDemo {
public:
    static int count;
    StaticDemo() { count++; }
    static void showCount() {
        cout << "[StaticDemo] Count: " << count << endl;
    }
};
int StaticDemo::count = 0;

// -----------------------------------------------------------------------------
// CHAPTER 6: Friend Functions
// -----------------------------------------------------------------------------
class FriendDemo {
    int data;
public:
    FriendDemo(int d) : data(d) {}
    friend void showFriendData(const FriendDemo&);
};
void showFriendData(const FriendDemo& f) {
    cout << "[FriendDemo] Friend function accessed data: " << f.data << endl;
}

// -----------------------------------------------------------------------------
// CHAPTER 7: Inheritance (Single, Multilevel)
// -----------------------------------------------------------------------------
class Base {
public:
    void baseFunc() { cout << "[Base] Base function\n"; }
};
class Derived : public Base {
public:
    void derivedFunc() { cout << "[Derived] Derived function\n"; }
};
class MoreDerived : public Derived {
public:
    void moreDerivedFunc() { cout << "[MoreDerived] MoreDerived function\n"; }
};

// -----------------------------------------------------------------------------
// CHAPTER 8: Polymorphism (Function Overriding, Virtual Functions)
// -----------------------------------------------------------------------------
class Person
{
protected:
    string name;
    int age;

public:
    // Default constructor
    Person() : name("Unknown"), age(0) {}
    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {}
    // Destructor
    virtual ~Person()
    {
        cout << "Person destructor called for " << name << endl;
    }
    // Member function
    virtual void introduce() const
    {
        cout << "Hi, I'm " << name << ", age " << age << "." << endl;
    }
    // Static member
    static int population;
    static void incrementPopulation() { population++; }
    // Friend function
    friend void showPerson(const Person &);
};
int Person::population = 0;

void showPerson(const Person &p)
{
    cout << "[Friend] Name: " << p.name << ", Age: " << p.age << endl;
}

// Derived class
class Student : public Person
{
    int rollno;

public:
    // Constructor using initializer list and base class constructor
    Student(string n, int a, int r) : Person(n, a), rollno(r)
    {
        incrementPopulation();
    }
    // Overriding base class function
    void introduce() const override
    {
        cout << "I'm student " << name << ", roll no: " << rollno << ", age " << age << "." << endl;
    }
    // Getter and setter
    int getRollNo() const { return rollno; }
    void setRollNo(int r) { rollno = r; }
};

// Demonstrate polymorphism
void printIntroduction(const Person &p)
{
    p.introduce();
}

// -----------------------------------------------------------------------------
// CHAPTER 9: Encapsulation (Getters/Setters)
// -----------------------------------------------------------------------------
class Encapsulated {
private:
    int value;
public:
    void setValue(int v) { value = v; }
    int getValue() const { return value; }
};

// -----------------------------------------------------------------------------
// MAIN FUNCTION: Demonstrate All Concepts
// -----------------------------------------------------------------------------
int main()
{
    cout << "================== CHAPTER 1: Basic Class and Object ==================\n";
    Basic b;
    b.data = 42;
    b.show();

    cout << "\n================== CHAPTER 2: Constructors and Destructors ==================\n";
    WithConstructor wc1;
    WithConstructor wc2(99);

    cout << "\n================== CHAPTER 3: Access Specifiers ==================\n";
    AccessDemo ad;
    cout << "Public: " << ad.open << ", Protected (via class): " << ad.semiSecret << ", Private (via getter): " << ad.getSecret() << endl;

    cout << "\n================== CHAPTER 4: Member Functions ==================\n";
    MemberFuncDemo mfd;
    mfd.setX(123);
    cout << "MemberFuncDemo x: " << mfd.getX() << endl;

    cout << "\n================== CHAPTER 5: Static Members ==================\n";
    StaticDemo s1, s2;
    StaticDemo::showCount();

    cout << "\n================== CHAPTER 6: Friend Functions ==================\n";
    FriendDemo fd(555);
    showFriendData(fd);

    cout << "\n================== CHAPTER 7: Inheritance ==================\n";
    MoreDerived md;
    md.baseFunc();
    md.derivedFunc();
    md.moreDerivedFunc();

    cout << "\n================== CHAPTER 8: Polymorphism ==================\n";
    Person p1("Alice", 30);
    Student s2("Bob", 20, 101);
    p1.introduce();
    s2.introduce();
    showPerson(p1);
    cout << "Population: " << Person::population << endl;
    printIntroduction(p1);
    printIntroduction(s2);
    cout << "Student roll no: " << s2.getRollNo() << endl;
    s2.setRollNo(202);
    cout << "Updated roll no: " << s2.getRollNo() << endl;

    cout << "\n================== CHAPTER 9: Encapsulation ==================\n";
    Encapsulated enc;
    enc.setValue(888);
    cout << "Encapsulated value: " << enc.getValue() << endl;

    return 0;
}
