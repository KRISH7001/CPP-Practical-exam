# 💻 C++ Project – OOP Practical Exam

## 📁 Project Overview

This project contains **five standalone C++ programs**, each demonstrating a different object-oriented programming concept, from basic **classes and encapsulation** through **inheritance, virtual functions, runtime polymorphism, and abstract classes**.

The programs included are:

* **Laptop Catalog** – Store and display laptop specifications.
* **Bank Account System** – Credit, debit, and validate a bank account balance.
* **Shape Area Calculator** – Compute the area of different shapes via inheritance.
* **Shape Polymorphism Demo** – Display shape details through base-class pointers.
* **Vehicle Simulator** – Start and drive different vehicle types through an abstract base class.

---

## 📌 Programs Included

### 1. Laptop Catalog

**File:** `Practical-exam-q1.cpp`

Registers a set of laptops and displays their name, price, and processor using a simple `Laptop` class.

### 2. Bank Account System

**File:** `Practical-exam-q2.cpp`

A `BankAccount` class that supports:

* Crediting and debiting funds
* Rejecting invalid (non-positive) amounts
* Rejecting debits that exceed the current balance
* Displaying full account details

### 3. Shape Area Calculator

**File:** `Practical-exam-q3.cpp`

A `Shape` base class extended by `Circle` and `Rectangle`, each overriding `calculateArea()` to compute its own area.

### 4. Shape Polymorphism Demo

**File:** `Practical-exam-q4.cpp`

Builds on Q3 by adding a `displayDetails()` virtual method, called through an array of `Shape*` base-class pointers — true runtime polymorphism.

### 5. Vehicle Simulator

**File:** `Practical-exam-q5.cpp`

An abstract `Vehicle` class with pure virtual methods `startEngine()` and `drive()`, implemented by `Car` and `Bike`, driven through a polymorphic `Vehicle*` array.

### 🔧 C++ Concepts Used

The programs together demonstrate:

* Classes and private member data (encapsulation)
* Constructors, including default parameter values
* Input validation inside class methods
* Single-level inheritance
* Virtual functions and `override` for polymorphism
* Runtime polymorphism via base-class pointers
* Pure virtual functions and abstract classes
* Virtual destructors for safe cleanup via base pointers
* Dynamic memory management with `new` and `delete`
* Console I/O using `cin`, `cout`, and `endl`

---

## 🏗️ Class Hierarchies

**Q3 & Q4 — Shapes**

```text
Shape
│
├── Circle
└── Rectangle
```

**Q5 — Vehicles**

```text
Vehicle (abstract)
│
├── Car
└── Bike
```

Q1 (`Laptop`) and Q2 (`BankAccount`) are standalone classes with no inheritance.

---

## 🛠️ Requirements

You can build and run these programs using:

* **GCC / G++ Compiler** (C++17 or later)
* **Visual Studio Code** (or any C++ IDE)

### How to Build & Run

Each file is a standalone program. Compile and run individually, e.g.:

```bash
g++ -std=c++17 -o q1 Practical-exam-q1.cpp
./q1
```

Repeat for `q2` through `q5`, substituting the corresponding filename. All five files compile cleanly with no warnings under `g++ -std=c++17`.

---

## 🖥️ Program Output

**Q1 — Laptop Catalog**

![Q1 output](F:\software\Projects\C++ Practical-exam\Output-Screenshots/q1-screenshot.png)

**Q2 — Bank Account System**

![Q2 output](F:\software\Projects\C++ Practical-exam\Output-Screenshots/q2-screenshot.png)

**Q3 — Shape Area Calculator**

![Q3 output](F:\software\Projects\C++ Practical-exam\Output-Screenshots/q3-screenshot.png)

**Q4 — Shape Polymorphism Demo**

![Q4 output](F:\software\Projects\C++ Practical-exam\Output-Screenshots/q4-screenshot.png)

**Q5 — Vehicle Simulator**

![Q5 output](F:\software\Projects\C++ Practical-exam\Output-Screenshots/q5-screenshot.png)

---

## 🎯 Learning Objectives

This project helps practice:

* Basic C++ syntax
* Classes, constructors, and encapsulation
* Input validation inside class methods
* Single-level inheritance
* Virtual functions and `override`
* Runtime polymorphism via base-class pointers
* Pure virtual functions and abstract classes
* Virtual destructors and dynamic memory management
* Input and output using `cin`, `cout`, and `endl`
* Basic problem solving

---

## 👨‍💻 Author

KRISH SAPARIYA
