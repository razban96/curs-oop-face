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