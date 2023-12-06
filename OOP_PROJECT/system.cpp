
#include "system.h"
using namespace std;

void system::addStudent()
{
	string name;
	int studentID;

	if (studentCount < MAX_STUDENTS) {
		cout << "Enter student name: ";
		cin >> name;

		// Assuming student IDs are unique for simplicity
		cout << "Enter student ID: ";
		cin >> studentID;

		// Check if the student is not already enrolled
		if (findStudent(studentID) == -1) {
			students[studentCount++] = Student(name, studentID);
			cout << "Student added successfully.\n";
		}
		else {
			cout << "Student with ID " << studentID << " is already enrolled.\n";
		}
	}
	else {
		cout << "Maximum number of students reached.\n";
	}
}

void system::displayEnrolledStudents() const
{
	cout << "Enrolled Students:\n";
	for (int i = 0; i < studentCount; ++i)
	{
		std::cout << "Student ID: " << students[i].studentID << ", Name: " << students[i].name << "\n";
	}
	cout << "\n";
}

void system::removeStudent()
{
	int studentID;

	cout << "Enter student ID to remove: ";
	cin >> studentID;

	int index = findStudent(studentID);

	if (index != -1) {
		// Shift elements to remove the student
		for (int i = index; i < studentCount - 1; ++i)
		{
			students[i] = students[i + 1];
		}
		--studentCount;
		cout << "Student removed successfully.\n";
	}
	else
	{
		cout << "Student with ID " << studentID << " not found.\n";
	}
}

void system::editStudentDetails()
{
	int studentID;

	cout << "Enter student ID to edit details: ";
	cin >> studentID;

	int index = findStudent(studentID);

	if (index != -1)
	{
		cout << "Enter new name: ";
		cin >> students[index].name;
		cout << "Student details updated successfully.\n";
	}
	else
	{
		cout << "Student with ID " << studentID << " not found.\n";
	}
}

system::system() //:studentCount(0)
{
	courses[0] = Course("Math");
	courses[1] = Course("Physics");
	courses[2] = Course("Chemistry");
	courses[3] = Course("PakistanStudy");
	courses[4] = Course("ComputerScience");
	courses[5] = Course("Islamiat");
	courses[6] = Course("Calculus");
	courses[7] = Course("DLD");
	courses[8] = Course("COAL");
	courses[9] = Course("OOP");

	for (int i = 0; i < MAX_STUDENTS; ++i) {
		for (int j = 0; j < MAX_COURSES; ++j) {
			courseEnrollment[i][j] = false;
		}
	}
	cout << endl;
}


void system::displayAvailableCourses()const
{
	cout << "Available Courses:\n";
	for (int i = 0; i < MAX_COURSES; ++i)
	{
		cout << i + 1 << "- " << courses[i].courseName;
		if (courses[i].enrolled)
		{
			cout << " (Enrolled)";
		}
		cout << "\n";
	}
	cout << "\n";
}


void system::registerCourse()
{
	int courseIndex;
	int sid;

	cout << "Enter the student ID: ";
	cin >> sid;
	int studentIndex = findStudent(sid);

	if (studentIndex != -1) {
		cout << "Enter the number of the course to register: ";
		cin >> courseIndex;

		if (courseIndex >= 1 && courseIndex <= MAX_COURSES)
		{
			Course& selectedCourse = courses[courseIndex - 1];
		
			// Check if the course is enrolled
			if (!(selectedCourse.enrolled))
			{
				selectedCourse.enrolled = true;
				// Assuming each student can register for a course only once
				if (!courseEnrollment[studentIndex][courseIndex-1])
				{
					courseEnrollment[studentIndex][courseIndex-1] = true;
					cout << "Course registration successful.\n";
				}
				else
				{
					cout << "You are already enrolled in this course.\n";
				}
			}
			else
			{
				cout << "Course not found or not enrolled.\n";
			}
		}
		else
		{
			cout << "Invalid course number.\n";
		}
	}
	else
		cout << "The Student ID you Entered is not registered" << endl;
	cout << endl;
}

void system::displayEnrolledCourses()const
{
	int studentID;

	cout << "Enter student ID to display registered courses: ";
	cin >> studentID;

	int studentIndex = findStudent(studentID);

	if (studentIndex != -1)
	{
		cout << "Registered courses for " << students[studentIndex].name << ":\n";

		bool has = false;

		for (int i = 0; i < MAX_COURSES; ++i)
		{
			if (courseEnrollment[studentIndex][i])
			{
				if (courses[i].enrolled)
				{  // Check if the course is still enrolled
					cout << courses[i].courseName << "\n";
					has = true;
				}
				else
				{
					cout << courses[i].courseName << " (Dropped)\n";
				}
			}
		}

		if (!has)
		{
			cout << "No enrolled courses found.\n";
		}
	}
	else
	{
		cout << "Student not found.\n";
	}
	cout << endl;
}


void system::displayAttendance()const
{
	int studentID;
	cout << "Enter student ID to display attendance: ";
	cin >> studentID;

	int studentIndex = findStudent(studentID);

	if (studentIndex != -1)
	{
		cout << "Attendance for " << students[studentIndex].name << ":\n";

	

			for (int i = 0; i < MAX_COURSES; ++i)
			{

					int attendanceIndex = studentIndex * MAX_COURSES + i;

					// Check if the course is enrolled before displaying attendance
					if (courseEnrollment[studentIndex][i])
					{
						cout << "Course: " << courses[i].courseName << ", Days Present: " << attendance[attendanceIndex].daysPresent << "\n";
					}

			}
		
	}
	else
	{
		cout << "Student not found.\n";
	}
}

void system :: markAttendance()
{
	int studentID;
	string courseName;
	int daysPresent;

	cout << "Enter student ID: ";
	cin >> studentID;

	int studentIndex = findStudent(studentID);

	if (studentIndex != -1) 
	{
		cout << "Enter course name: ";
		cin >> courseName;

		int courseIndex = findCourse(courseName);

		if (courseIndex != -1 && courses[courseIndex].enrolled && courseEnrollment[studentIndex][courseIndex])
		{
			cout << "Enter days present for " << students[studentIndex].name << " in " << courseName << ": ";
			cin >> daysPresent;

			// Update only the attendance for the specific course if enrolled
			if (courseEnrollment[studentIndex][courseIndex]) 
			{
				attendance[studentIndex * MAX_COURSES + courseIndex] = Attendance(studentID, courseName, daysPresent);
				cout << "Attendance marked successfully.\n";
			}
			else
			{
				cout << "Student not enrolled in the specified course.\n";
			}
		}
		else
		{
			cout << "Course not found or not enrolled.\n";
		}
	}
	else 
	{
		cout << "Student not found.\n";
	}
}

void system:: displayMarks()
{
	int studentID;
	cout << "Enter student ID to display marks: ";
	cin >> studentID;

	int studentIndex = findStudent(studentID);

	if (studentIndex != -1) 
	{
		cout << "Marks for " << students[studentIndex].name << ":\n";

		for (int i = 0; i < MAX_COURSES; ++i)
		{
			int markindex = studentIndex * MAX_COURSES + i;

			// Check if the course is enrolled before displaying marks
			if (courses[i].enrolled && courseEnrollment[studentIndex][i])
			{
				cout << "Course: " << courses[i].courseName << ", Marks: " << marks[markindex].marks << "\n";
			}
		}
	}
	else 
	{
		cout << "Student not found.\n";
	}
}
