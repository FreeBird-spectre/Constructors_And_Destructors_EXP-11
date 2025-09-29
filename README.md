# 📘 C++ Constructor and Destructor Programs

## 🧪 Aim
To study and implement the concepts of constructors, destructors, and copy constructors in C++, understanding their behavior, usage, and practical applications.

## 🧰 Apparatus
- VS Code or any C++ IDE
- Online C++ Compiler (e.g., cpp.sh, OnlineGDB)


## 📚 Theory

In C++, constructors and destructors are special member functions used to initialize and clean up objects:

- **Constructor**: Automatically called when an object is created. Can be default, parameterized, or copy constructor.
- **Destructor**: Automatically called when an object goes out of scope or is deleted. Used to release resources.
- **Copy Constructor**: Creates a new object by copying an existing one.

### 🔑 Key Concepts

- **Default Constructor**: No parameters, initializes default values.
- **Parameterized Constructor**: Accepts arguments to initialize object data.
- **Copy Constructor**: Copies data from one object to another.
- **Destructor**: Cleans up resources when object is destroyed.


## 🧮 Programs and Algorithms

### 1️⃣ Student Class with Constructor Inside Class

**Description**: Demonstrates a default constructor defined inside the class to input and display student data.

**Algorithm**:
- Define a class `Student` with `name` and `fee`.
- Use a constructor to take input.
- Use `display()` to show the data.

**Conclusion**: Shows how constructors can be used to initialize object data directly.


### 2️⃣ Student Class with Constructor Outside Class

**Description**: Demonstrates constructor definition outside the class body.

**Algorithm**:
- Declare constructor in class.
- Define constructor outside using scope resolution.
- Input and display student data.

**Conclusion**: Separating constructor logic improves readability and modularity.


### 3️⃣ Copy Constructor Example

**Description**: Demonstrates how a copy constructor duplicates an object.

**Algorithm**:
- Create a class `Student` with name, age, roll_no.
- Define a copy constructor to copy values from another object.
- Display both original and copied objects.

**Conclusion**: Copy constructors are useful for duplicating objects with identical data.


### 4️⃣ Destructor with Object Count

**Description**: Demonstrates how destructors work and track object creation/destruction.

**Algorithm**:
- Create a global counter.
- Increment in constructor, decrement in destructor.
- Create multiple objects and observe lifecycle.

**Conclusion**: Destructors help manage memory and cleanup, especially in scoped blocks.

### 5️⃣ Date Class with Parameterized Constructor

**Description**: Uses a parameterized constructor to store and display a date.

**Algorithm**:
- Create a class `Date` with day, month, year.
- Use constructor to initialize values.
- Display the date using `show()`.

**Conclusion**: Parameterized constructors simplify object initialization with user-defined values.


## 🎯 Key Learning Outcomes

- Understand constructor types and their roles.
- Learn how destructors manage object lifecycle.
- Implement copy constructors for object duplication.
- Use parameterized constructors for flexible initialization.


## 🧠 Applications

- **Object-Oriented Programming**: Core to class-based design.
- **Memory Management**: Clean resource handling via destructors.
- **Data Modeling**: Real-world entities like students, dates, etc.
- **System Design**: Efficient object creation and destruction.


## ✅ Code Execution Status
All programs compiled and executed successfully with expected outputs.




