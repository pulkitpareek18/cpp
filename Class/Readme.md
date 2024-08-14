In C++, classes and objects are the basic building blocks that lead to Object-Oriented Programming (OOP). In this article, we will learn about C++ classes, objects, how they work, and how to implement them in our C++ program.

### What is a Class in C++?

A class is a user-defined data type that holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

**For Example:** Consider the class of Cars. There may be many cars with different names and brands, but all of them will share some common properties like having 4 wheels, speed limit, mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

A class is a user-defined data type that has data members and member functions. Data members are the data variables, and member functions are the functions used to manipulate these variables together. These data members and member functions define the properties and behavior of the objects in a class. 

In the above example of the class Car, the data members will be speed limit, mileage, etc., and member functions can include applying brakes, increasing speed, etc. However, we cannot use the class as it is; we first need to create an object of the class to use its features. An object is an instance of a class.

**Note:** When a class is defined, no memory is allocated. Memory is allocated only when the class is instantiated (i.e., an object is created).

### Defining a Class in C++

A class is defined in C++ using the keyword `class` followed by the name of the class. The following is the syntax:

```cpp
class ClassName {
     access_specifier:
     // Body of the class
};
```

Here, the access specifier defines the level of access to the class’s data members.

**Example:**

```cpp
class ThisClass {
     public:
     int var;     // data member
     void print() {           // member method
          cout << "Hello";
      }
};
```

### C++ Class and Object

#### What is an Object in C++?

When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

**Syntax to Create an Object**

We can create an object of the given class in the same way we declare the variables of any other built-in data type.

```cpp
ClassName ObjectName;
```

**Example:**

```cpp
MyClass obj;
```

In the above statement, an object of `MyClass` with the name `obj` is created.

**Accessing Data Members and Member Functions**

The data members and member functions of the class can be accessed using the dot (`.`) operator with the object. For example, if the name of the object is `obj` and you want to access the member function with the name `printName()`, then you will have to write:

```cpp
obj.printName();
```

**Example of Class and Object in C++**

The below program shows how to define a simple class and how to create an object of it.

```cpp
// C++ program to illustrate how to create a simple class and object
#include <iostream>
#include <string>

using namespace std;

// Define a class named 'Person'
class Person {
public:
    // Data members
    string name;
    int age;

    // Member function to introduce the person
    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am "
             << age << " years old." << endl;
    }
};

int main()
{
    // Create an object of the Person class
    Person person1;

    // Accessing data members
    person1.name = "Alice";
    person1.age = 30;

    // Call the introduce member method
    person1.introduce();

    return 0;
}
```

**Output:**

```
Hi, my name is Alice and I am 30 years old.
```

### Access Modifiers

In C++ classes, we can control the access to the members of the class using Access Specifiers. Also known as access modifiers, these are keywords that specify the level of access to the class’s data members.

In C++, there are 3 access specifiers:

- **Public:** Members declared as public can be accessed from outside the class.
- **Private:** Members declared as private can only be accessed within the class itself.
- **Protected:** Members declared as protected can be accessed within the class and by derived classes.

If we do not specify an access specifier, the private specifier is applied to every member by default.

**Example of Access Specifiers**

```cpp
// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;

class Geeks {
private:
    string geekname;
    // Access specifier
public:
    // Member Functions
    void setName(string name) { geekname = name; }

    void printname() { cout << "Geekname is: " << geekname; }
};

int main()
{
    // Declare an object of class Geeks
    Geeks obj1;
    // Accessing data member
    // Cannot do it like: obj1.geekname = "Abhi";
    obj1.setName("Abhi");
    // Accessing member function
    obj1.printname();
    return 0;
}
```

**Output:**

```
Geekname is: Abhi
```

In the above example, we cannot access the data member `geekname` outside the class. If we try to access it in the main function using the dot operator, `obj1.geekname`, then the program will throw an error.

### Member Functions in C++ Classes

There are 2 ways to define a member function:

1. **Inside class definition**
2. **Outside class definition**

Till now, we have defined the member function inside the class, but we can also define the member function outside the class definition. To define a member function outside the class definition:

1. First declare the function prototype in the class definition.
2. Use the scope resolution `::` operator along with the class name and function name.

**Example**

```cpp
// C++ program to demonstrate member function definition outside class
#include <bits/stdc++.h>
using namespace std;

class Geeks {
public:
    string geekname;
    int id;

    // printname is not defined inside class definition
    void printname();

    // printid is defined inside class definition
    void printid() { cout << "Geek id is: " << id; }
};

// Definition of printname using scope resolution operator ::
void Geeks::printname()
{
    cout << "Geekname is: " << geekname;
}

int main()
{
    Geeks obj1;
    obj1.geekname = "xyz";
    obj1.id = 15;

    // Call printname()
    obj1.printname();
    cout << endl;

    // Call printid()
    obj1.printid();
    return 0;
}
```

**Output:**

```
Geekname is: xyz
Geek id is: 15
```

Note that all the member functions defined inside the class definition are by default inline, but you can also make any non-class function inline by using the keyword `inline` with them. Inline functions are actual functions that are copied everywhere during compilation, like pre-processor macros, so the overhead of function calls is reduced.

**Note:** Declaring a friend function is a way to give private access to a non-member function.

### Constructors

Constructors are special class members that are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition.

There are 4 types of constructors in C++ classes:

1. **Default Constructors:** The constructor that takes no argument is called the default constructor.
2. **Parameterized Constructors:** This type of constructor takes arguments to initialize the data members.
3. **Copy Constructors:** Copy constructor creates the object from an already existing object by copying it.
4. **Move Constructor:** The move constructor creates the object from an already existing object but by moving it.

**Example of Constructor**

```cpp
// C++ program to demonstrate constructors
#include <bits/stdc++.h>
using namespace std;

class Geeks
{
public:
    int id;
    
    // Default Constructor
    Geeks()
    {
        cout << "Default Constructor called" << endl; 
        id = -1;
    }
    
    // Parameterized Constructor
    Geeks(int x)
    {
        cout << "Parameterized Constructor called " << endl;
        id = x;
    }
};

int main() {
    // obj1 will call Default Constructor
    Geeks obj1;
    cout << "Geek id is: " << obj1.id << endl;
    
    // obj2 will call Parameterized Constructor
    Geeks obj2(21);
    cout << "Geek id is: " << obj2.id << endl;
    return 0;
}
```

**Output:**

```
Default Constructor called
Geek id is: -1
Parameterized Constructor called 
Geek id is: 21
```

**Note:** If the programmer does not define the constructor, the compiler automatically creates the default, copy, and move constructors.

### Destructors

A destructor is another special member function that is called by the compiler when the scope of the object ends. It deallocates all the memory previously used by the object of

 the class so that there will be no memory leaks. The destructor also has the same name as the class but with a tilde (`~`) as a prefix.

**Example of Destructor**

```cpp
// C++ program to explain destructors
#include <bits/stdc++.h>
using namespace std;

class Geeks
{
public:
    int id;
    
    // Definition for Destructor
    ~Geeks()
    {
        cout << "Destructor called for id: " << id << endl; 
    }
};

int main() 
{
    Geeks obj1;
    obj1.id = 7;
    int i = 0;
    while (i < 5)
    {
        Geeks obj2;
        obj2.id = i;
        i++;        
    } // Scope for obj2 ends here

    return 0;
} // Scope for obj1 ends here
```

**Output:**

```
Destructor called for id: 0
Destructor called for id: 1
Destructor called for id: 2
Destructor called for id: 3
Destructor called for id: 4
Destructor called for id: 7
```

### Interesting Fact (Rarely Known Concept)

**Why do we give semicolons at the end of a class?**

Many people might say that it’s a basic syntax and we should give a semicolon at the end of the class as it’s a rule defined in C++. But the main reason for having a semicolon at the end of the class is that the compiler checks if the user is trying to create an instance of the class at the end of it. 

Yes, just like structures and unions, we can also create an instance of a class at the end, just before the semicolon. As a result, once execution reaches that line, it creates a class and allocates memory to your instance.

```cpp
#include <iostream>
using namespace std;

class Demo {
   int a, b;
public:
    Demo()   // Default constructor
    {
        cout << "Default Constructor" << endl;
    }
    Demo(int a, int b) : a(a), b(b)  // Parameterized constructor
    {
        cout << "Parameterized constructor - values: " << a << " " << b << endl;
    }
} instance;

int main() {
    return 0;
}
```

**Output:**

```
Default Constructor
```

We can see that we have created a class instance of `Demo` with the name “instance”. As a result, the output we see is "Default Constructor is called."

Similarly, we can also call the parameterized constructor just by passing values:

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int a, b;
    Demo()
    {
        cout << "Default Constructor" << endl;
    }
    Demo(int a, int b) : a(a), b(b)
    {
        cout << "Parameterized Constructor values - " << a << " " << b << endl;
    }
} instance(100, 200);

int main() {
    return 0;
}
```

**Output:**

```
Parameterized Constructor values - 100 200
```

So by creating an instance just before the semicolon, we can create the instance of the class.