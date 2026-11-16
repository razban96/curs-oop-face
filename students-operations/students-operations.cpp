//- Display name and grade for all students in a course given by name
//- Display name and speciality of a teacher presenting the course
//- Move a student from a course to another course
//- Promote a student from a course as teacher on the same course
//- is there a student assigned to a specific course ?
using namespace std;
#include <vector>
#include <string>
#include <iostream>

class Person {
    string name;
};
class Student : public Person {
    int grade;
};
class Teacher : public Person {
	string speciality;
};
class Course {
	string name;
	Teacher teacher;
	vector<Student*> students;
};

int main()
{
    cout << "Hello World!\n";
}