#include<bits/stdc++.h>
using namespace std;

#define MAX 100

struct Student
{
    int rollNo;
    char name[50];
    char branch[30];
    float cgpa;
};

Student students[MAX];
int countStudents = 0;

// Function to save student records to file
void saveToFile()
{
    ofstream file("students.txt");

    for (int i = 0; i < countStudents; i++)
    {
        file << students[i].rollNo << " "
             << students[i].name << " "
             << students[i].branch << " "
             << students[i].cgpa << endl;
    }

    file.close();
}

// Function to load student records from file
void loadFromFile()
{
    ifstream file("students.txt");

    if (!file)
        return;

    countStudents = 0;

    while (file >> students[countStudents].rollNo
                >> students[countStudents].name
                >> students[countStudents].branch
                >> students[countStudents].cgpa)
    {
        countStudents++;

        if (countStudents == MAX)
            break;
    }

    file.close();
}

// Linear search for roll number
int searchStudent(int roll)
{
    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].rollNo == roll)
            return i;
    }

    return -1;
}

// Add a new student
void addStudent()
{
    if (countStudents == MAX)
    {
        cout << "\nStudent list is full!\n";
        return;
    }

    int roll;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    // Check duplicate roll number
    if (searchStudent(roll) != -1)
    {
        cout << "Roll Number already exists!\n";
        return;
    }

    students[countStudents].rollNo = roll;

    cout << "Enter Name: ";
    cin >> students[countStudents].name;

    cout << "Enter Branch: ";
    cin >> students[countStudents].branch;

    cout << "Enter CGPA: ";
    cin >> students[countStudents].cgpa;

    if (students[countStudents].cgpa < 0 ||
        students[countStudents].cgpa > 10)
    {
        cout << "Invalid CGPA!\n";
        return;
    }

    countStudents++;

    saveToFile();

    cout << "Student added successfully!\n";
}

// Display all students
void displayStudents()
{
    if (countStudents == 0)
    {
        cout << "\nNo student records found!\n";
        return;
    }

    cout << "\n";
    cout << left
         << setw(10) << "Roll No"
         << setw(20) << "Name"
         << setw(15) << "Branch"
         << setw(10) << "CGPA" << endl;

    cout << "-------------------------------------------------------\n";

    for (int i = 0; i < countStudents; i++)
    {
        cout << left
             << setw(10) << students[i].rollNo
             << setw(20) << students[i].name
             << setw(15) << students[i].branch
             << setw(10) << students[i].cgpa << endl;
    }
}

// Search student
void searchStudentRecord()
{
    int roll;

    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    int position = searchStudent(roll);

    if (position == -1)
    {
        cout << "Student not found!\n";
        return;
    }

    cout << "\nStudent Found!\n";
    cout << "-------------------------\n";
    cout << "Roll Number : " << students[position].rollNo << endl;
    cout << "Name        : " << students[position].name << endl;
    cout << "Branch      : " << students[position].branch << endl;
    cout << "CGPA        : " << students[position].cgpa << endl;
}

// Update student
void updateStudent()
{
    int roll;

    cout << "\nEnter Roll Number to update: ";
    cin >> roll;

    int position = searchStudent(roll);

    if (position == -1)
    {
        cout << "Student not found!\n";
        return;
    }

    cout << "Enter New Name: ";
    cin >> students[position].name;

    cout << "Enter New Branch: ";
    cin >> students[position].branch;

    cout << "Enter New CGPA: ";
    cin >> students[position].cgpa;

    if (students[position].cgpa < 0 ||
        students[position].cgpa > 10)
    {
        cout << "Invalid CGPA!\n";
        return;
    }

    saveToFile();

    cout << "Student updated successfully!\n";
}

// Delete student
void deleteStudent()
{
    int roll;

    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    int position = searchStudent(roll);

    if (position == -1)
    {
        cout << "Student not found!\n";
        return;
    }

    // Shift elements to the left
    for (int i = position; i < countStudents - 1; i++)
    {
        students[i] = students[i + 1];
    }

    countStudents--;

    saveToFile();

    cout << "Student deleted successfully!\n";
}

// Calculate average CGPA
void averageCGPA()
{
    if (countStudents == 0)
    {
        cout << "\nNo student records available!\n";
        return;
    }

    float total = 0;

    for (int i = 0; i < countStudents; i++)
    {
        total = total + students[i].cgpa;
    }

    float average = total / countStudents;

    cout << fixed << setprecision(2);
    cout << "\nAverage CGPA: " << average << endl;
}

// Main menu
void menu()
{
    int choice;

    loadFromFile();

    do
    {
        cout << "\n=====================================\n";
        cout << "       STUDENT MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Calculate Average CGPA\n";
        cout << "7. Exit\n";
        cout << "=====================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudentRecord();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                averageCGPA();
                break;

            case 7:
                cout << "\nThank you for using Student Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 7);
}

int main()
{
    menu();

    return 0;
}
