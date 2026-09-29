# Student Management System

A simple **Student Management System** developed in **C++** as a Fundamental Data Structures (FDS) mini-project.

The project demonstrates basic data structure concepts such as **arrays, traversal, linear search, insertion, deletion, and updating records**.

## 📌 Project Overview

The Student Management System allows users to manage student records through a simple menu-driven console application.

Each student record contains:

* Roll Number
* Name
* Branch
* CGPA

Student records are stored in an array and can also be saved to a text file for data persistence.

## ✨ Features

* ➕ Add a new student
* 📋 Display all students
* 🔍 Search student by roll number
* ✏️ Update student details
* 🗑️ Delete student record
* 📊 Calculate average CGPA
* 💾 Save records to a text file
* 📂 Load records when the program starts
* 🚫 Prevent duplicate roll numbers
* ✅ Validate CGPA between 0 and 10

## 🧠 FDS Concepts Used

This project focuses on basic **Fundamental Data Structures** concepts.

| Concept       | Application                   |
| ------------- | ----------------------------- |
| Array         | Store student records         |
| Structure     | Represent student information |
| Traversal     | Display all students          |
| Linear Search | Search by roll number         |
| Insertion     | Add a student                 |
| Deletion      | Remove a student              |
| Shifting      | Maintain array after deletion |
| Array Access  | Update student details        |
| File Handling | Store and retrieve records    |

## ⚙️ Technologies Used

* **Language:** C++
* **Compiler:** G++ / GCC
* **Data Structure:** Array
* **File Storage:** Text File
* **IDE:** VS Code / Code::Blocks / Dev-C++

## 📁 Project Structure

```text
Student-Management-System/
│
├── main.cpp
├── students.txt
└── README.md
```

### `main.cpp`

Contains the complete C++ source code of the Student Management System.

### `students.txt`

Stores student records so that data is preserved after the program is closed.

### `README.md`

Project documentation.

## 🚀 How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/Student-Management-System.git
```

### 2. Open the project

```bash
cd Student-Management-System
```

### 3. Compile the program

```bash
g++ main.cpp -o main
```

### 4. Run the program

#### Windows

```bash
main.exe
```

#### Linux / macOS

```bash
./main
```

## 🖥️ Menu

```text
=====================================
       STUDENT MANAGEMENT SYSTEM
=====================================
1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Calculate Average CGPA
7. Exit
=====================================
```

## 🔎 Example

### Adding a Student

```text
Enter Roll Number: 32
Enter Name: Yash
Enter Branch: CSE
Enter CGPA: 8.5

Student added successfully!
```

### Displaying Students

```text
Roll No   Name                Branch         CGPA
-------------------------------------------------------
32        Yash                CSE            8.5
36        Tanmay              CSE            8.2
```

### Searching a Student

```text
Enter Roll Number to search: 32

Student Found!
-------------------------
Roll Number : 32
Name        : Yash
Branch      : CSE
CGPA        : 8.5
```

## ⏱️ Time Complexity

The project uses an array and linear search.

| Operation         | Time Complexity |
| ----------------- | --------------: |
| Add Student       |            O(n) |
| Display Students  |            O(n) |
| Search Student    |            O(n) |
| Update Student    |            O(n) |
| Delete Student    |            O(n) |
| Calculate Average |            O(n) |

Here, **n** represents the number of students.

## 🎯 Project Objectives

The main objectives of this project are:

1. To understand the practical implementation of arrays.
2. To implement linear searching.
3. To understand insertion and deletion in arrays.
4. To understand element shifting after deletion.
5. To practice structures and functions in C++.
6. To develop a simple menu-driven application.
7. To understand basic file handling.

## 🔮 Future Improvements

The project can be extended with:

* Sorting students by CGPA or roll number
* Binary search after sorting
* Student attendance management
* Marks and grade management
* Multiple student branches
* Login and authentication
* Dynamic memory allocation
* Database integration
* GUI-based interface

## 👨‍💻 Authors

**Yash Dashrath**
**Tanmay Gunjal**

### Academic Project

**Fundamental Data Structures (FDS)**
**Student Management System**

---

## 📄 License

This project is created for **educational and academic purposes**.
