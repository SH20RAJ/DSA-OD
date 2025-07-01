# C++ Classes Tutorial: Complete Guide (Beginner to Advanced)

## Table of Contents
1. [Introduction to Classes](#1-introduction-to-classes)
2. [Basic Class Structure](#2-basic-class-structure)
3. [Constructors and Destructors](#3-constructors-and-destructors)
4. [Access Specifiers](#4-access-specifiers)
5. [Member Functions](#5-member-functions)
6. [Static Members](#6-static-members)
7. [Friend Functions](#7-friend-functions)
8. [Inheritance](#8-inheritance)
9. [Polymorphism](#9-polymorphism)
10. [Encapsulation](#10-encapsulation)
11. [Advanced Concepts](#11-advanced-concepts)

---

## 1. Introduction to Classes

### What is a Class?
A **class** is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data (attributes) and functions (methods) that operate on that data.

### Why Use Classes?
- **Encapsulation**: Bundle data and methods together
- **Abstraction**: Hide implementation details
- **Inheritance**: Create new classes based on existing ones
- **Polymorphism**: Use one interface for different data types

---

## 2. Basic Class Structure

### Syntax
```cpp
class ClassName {
    // Data members (variables)
    // Member functions (methods)
};
```

### Example
```cpp
class Student {
public:
    string name;
    int age;
    
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
```

### Creating Objects
```cpp
Student s1;           // Default initialization
s1.name = "John";     // Accessing member
s1.age = 20;
s1.displayInfo();     // Calling member function
```

**Key Points:**
- Class definition ends with semicolon (`;`)
- Objects are instances of classes
- Use dot operator (`.`) to access members

---

## 3. Constructors and Destructors

### Constructors
Special member functions that initialize objects when they are created.

#### Types of Constructors:

1. **Default Constructor**
```cpp
class Student {
public:
    string name;
    int age;
    
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }
};
```

2. **Parameterized Constructor**
```cpp
class Student {
public:
    string name;
    int age;
    
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }
};
```

3. **Constructor with Initializer List** (Recommended)
```cpp
class Student {
public:
    string name;
    int age;
    
    // Constructor with initializer list
    Student(string n, int a) : name(n), age(a) {
        // Constructor body (optional)
    }
};
```

### Destructor
Special function called when an object is destroyed.

```cpp
class Student {
public:
    string name;
    
    // Constructor
    Student(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }
    
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};
```

**Key Points:**
- Constructors have the same name as the class
- Destructors have `~` prefix
- No return type for constructors/destructors

---

## 4. Access Specifiers

Control the accessibility of class members.

### Types:

1. **Public**: Accessible from anywhere
2. **Private**: Only accessible within the class
3. **Protected**: Accessible within class and derived classes

```cpp
class Student {
private:
    string password;        // Only accessible within class
    
protected:
    string email;          // Accessible in derived classes
    
public:
    string name;           // Accessible everywhere
    
    void setPassword(string p) {
        password = p;      // OK: within same class
    }
    
    string getPassword() {
        return password;   // OK: within same class
    }
};
```

**Key Points:**
- Default access specifier for class is `private`
- Use `public` for interfaces, `private` for implementation details
- `protected` is used in inheritance

---

## 5. Member Functions

Functions defined within a class that operate on class data.

### Types:

1. **Inline Functions** (defined inside class)
```cpp
class Calculator {
public:
    int add(int a, int b) {
        return a + b;      // Inline function
    }
};
```

2. **Outside Class Definition**
```cpp
class Calculator {
public:
    int add(int a, int b);  // Declaration
};

// Definition outside class
int Calculator::add(int a, int b) {
    return a + b;
}
```

3. **Const Member Functions**
```cpp
class Student {
private:
    string name;
public:
    string getName() const {  // const function
        return name;          // Cannot modify data members
    }
};
```

**Key Points:**
- Use `::` scope resolution operator for outside definitions
- `const` functions cannot modify object state
- Prefer const functions for read-only operations

---

## 6. Static Members

Belong to the class rather than to any specific object.

### Static Data Members
```cpp
class Student {
public:
    string name;
    static int totalStudents;  // Static data member
    
    Student(string n) : name(n) {
        totalStudents++;       // Increment for each object
    }
};

// Definition outside class (required)
int Student::totalStudents = 0;
```

### Static Member Functions
```cpp
class Student {
public:
    static int totalStudents;
    
    static int getTotalStudents() {  // Static function
        return totalStudents;
    }
};

// Usage
int count = Student::getTotalStudents();  // No object needed
```

**Key Points:**
- Static members are shared by all objects
- Static functions can only access static members
- Access using class name, not object

---

## 7. Friend Functions

Functions that can access private and protected members of a class.

```cpp
class Student {
private:
    string name;
    int marks;
    
public:
    Student(string n, int m) : name(n), marks(m) {}
    
    // Friend function declaration
    friend void displayStudent(const Student& s);
};

// Friend function definition
void displayStudent(const Student& s) {
    cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
    // Can access private members
}

// Usage
Student s1("Alice", 95);
displayStudent(s1);  // Friend function call
```

**Key Points:**
- Not member functions of the class
- Can access all members of the class
- Breaks encapsulation, use sparingly

---

## 8. Inheritance

Mechanism to create new classes based on existing classes.

### Types of Inheritance:

1. **Single Inheritance**
```cpp
class Person {           // Base class
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {  // Derived class
private:
    int rollNo;
public:
    Student(string n, int a, int r) : Person(n, a), rollNo(r) {}
    void showDetails() {
        display();  // Inherited function
        cout << "Roll No: " << rollNo << endl;
    }
};
```

2. **Multilevel Inheritance**
```cpp
class Person {
    // Base class
};

class Student : public Person {
    // Derived from Person
};

class Graduate : public Student {
    // Derived from Student
};
```

### Access Modes:
- **Public inheritance**: `public` remains `public`, `protected` remains `protected`
- **Protected inheritance**: `public` becomes `protected`
- **Private inheritance**: `public` and `protected` become `private`

---

## 9. Polymorphism

Ability to use one interface for different data types.

### Function Overriding
```cpp
class Animal {
public:
    virtual void makeSound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // Override base function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};
```

### Runtime Polymorphism
```cpp
void playSound(Animal& animal) {
    animal.makeSound();  // Calls appropriate function at runtime
}

Dog d;
Cat c;
playSound(d);  // Output: Dog barks
playSound(c);  // Output: Cat meows
```

**Key Points:**
- Use `virtual` keyword in base class
- Use `override` keyword in derived class (C++11)
- Enables runtime polymorphism through pointers/references

---

## 10. Encapsulation

Bundling data and methods together and hiding implementation details.

### Example: Bank Account
```cpp
class BankAccount {
private:
    double balance;      // Hidden data
    string accountNo;
    
public:
    // Constructor
    BankAccount(string accNo, double initialBalance) 
        : accountNo(accNo), balance(initialBalance) {}
    
    // Public interface
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }
    
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            return true;
        }
        cout << "Invalid withdrawal amount" << endl;
        return false;
    }
    
    double getBalance() const {
        return balance;
    }
    
    string getAccountNo() const {
        return accountNo;
    }
};
```

**Benefits:**
- Data hiding and security
- Controlled access through methods
- Easy to maintain and modify

---

## 11. Advanced Concepts

### Pure Virtual Functions and Abstract Classes
```cpp
class Shape {  // Abstract class
public:
    virtual double area() = 0;  // Pure virtual function
    virtual void display() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.14159 * radius * radius;
    }
    
    void display() override {
        cout << "Circle with area: " << area() << endl;
    }
};
```

### Function Overloading
```cpp
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

### Copy Constructor
```cpp
class Student {
public:
    string name;
    int* marks;
    
    // Constructor
    Student(string n, int m) : name(n) {
        marks = new int(m);
    }
    
    // Copy constructor
    Student(const Student& other) : name(other.name) {
        marks = new int(*other.marks);  // Deep copy
    }
    
    // Destructor
    ~Student() {
        delete marks;
    }
};
```

---

## Best Practices

1. **Use meaningful class and variable names**
2. **Keep data members private**
3. **Provide public interfaces through methods**
4. **Use const member functions for read-only operations**
5. **Initialize members using initializer lists**
6. **Use virtual destructors in base classes**
7. **Follow the Rule of Three/Five for resource management**
8. **Prefer composition over inheritance when possible**

---

## Common Mistakes to Avoid

1. **Forgetting semicolon after class definition**
2. **Making all members public**
3. **Not defining static data members outside class**
4. **Forgetting virtual destructors in polymorphic classes**
5. **Shallow copying when deep copying is needed**
6. **Not using const where appropriate**

---

## Practice Exercises

1. Create a `Rectangle` class with length, width, area(), and perimeter() methods
2. Implement a `Library` system with `Book` and `Member` classes
3. Design a simple `Vehicle` hierarchy with `Car`, `Bike`, and `Truck`
4. Create a `Complex` number class with operator overloading
5. Implement a basic `Stack` class using arrays

This tutorial covers the fundamental to advanced concepts of C++ classes. Practice with these examples and gradually build more complex programs to master object-oriented programming in C++.
