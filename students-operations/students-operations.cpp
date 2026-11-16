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
	// add constructor ("nume persoana") Pay attention !! this is called indirectly
    string name;
};
class Student : public Person {
	// constructor ("nume student", nota)
    int grade;
public:
	string getName()
};
class Teacher : public Person {
	// add constructor ("nume profesor", "specialitate")
	string speciality;
};
class Course {
	// add constructor ("nume curs", Teacher* teacher1, vector<Student*> students)
	string name;
	Teacher teacher;
	vector<Student*> students;
public:
	string getName() {
		return name;
	}
};

class CourseHelper {
public:
	static void displayStudentsInCourse(string courseName, 
		vector<Course*> courses) {
		return;
	}

	static vector<Course*> initCourses() {
		//Course* course1 = new Course("Math", 
//	new Teacher("Mr. Smith", "Mathematics"),
//	// niste studenti
//	[{"student1", 10}, {"Strudent2", 9]);
//courses.push_back(course1);
//Course* course2 = new Course("Math2",
//	new Teacher("Mr. Smith2", "Mathematics2"),
//	// niste studenti
//	[{"student11", 10}, "Strudent22", 9]);
//courses.push_back(course2);
	}
};

int main()
{
	vector<Course*> courses = CourseHelper::initCourses();
		
	//- Display name and grade for all students in a course given by name
	CourseHelper::displayStudentsInCourse("Math", courses);
}