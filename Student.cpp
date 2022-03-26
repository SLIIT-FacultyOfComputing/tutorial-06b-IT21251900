#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
Student::assignDetails(int studentId, char name) {
    studentId = studentId;
    name = name;
}

// Display StudentId and Name
Student::display() {
  cout << "student name is " << name << " and student id is " << studentId;
}
