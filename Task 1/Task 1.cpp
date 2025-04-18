//Task 1: CGPA Calculator.
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Course {
    string name;
    double gradePoint;
    int creditHours;
};

int main() {
    int numCourses;
    cout << "Please enter number of courses?" << endl;
    cin >> numCourses;

    vector<Course> courses(numCourses);
    double totalGradePoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++) {
        cout << "\nEnter details for course " << i + 1 << ":\n";
        cout << "Course name: ";
        cin >> ws;
        getline(cin, courses[i].name);

        cout << "Credit hours: ";
        cin >> courses[i].creditHours;

        cout << "Grade point (e.g., 4.0 for A, 3.5 for B+): ";
        cin >> courses[i].gradePoint;

        totalCredits += courses[i].creditHours;
        totalGradePoints += courses[i].gradePoint * courses[i].creditHours;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n**** Grade Report ****\n";
    for (const auto& course : courses) {
        cout << "Course: " << course.name
            << " , Credit Hours: " << course.creditHours
            << " , Grade Point: " << course.gradePoint << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal Credit Hours: " << totalCredits << endl << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
