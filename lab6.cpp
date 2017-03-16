#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents; // Stores the number of students
    cout << "Enter total number of students: ";
    cin >> numStudents;
    cout << "Enter GPA of students." << endl;
    
    Student students[numStudents];
    for (int i=0; i<numStudents; i++) {
        cout << "Student" << i+1 << ": ";
        double grade;
        cin >> grade;
        students[i]=Student(i+1,grade);
    }
    
    cout << "\nDisplaying GPA of students." << endl;
    for (int i=0; i<numStudents; i++)
        students[i].Display();

//    Student s;
//    s.Display();
    return 0;
}
