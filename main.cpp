#include <iostream>
using namespace std;
# include<string.h>
class CStudent {
private:
    char student_name[50] = {0};
    int student_ID = 0;
    char student_email_username[10] = {0};
    char student_major[10] = {0};
    float student_grades[5] = {0};
    float student_score = 0;
    char student_email_password[10] = {0};

public:
    // constructor
    CStudent() {}

    // setter and getter functions to acess private members//
    void setStudentName(char *name) { strcpy(student_name, name); }

    char *getStudentName() { return student_name; }

    void setStudentID(int id) { student_ID = id; }

    int getStudentID() { return student_ID; }

    void setStudentEmailUsername(char *email) {
        strcpy(student_email_username, email);
    }
        char *getStudentEmailUsername() { return student_email_username; }


        char *getStudentMajor() { return student_major; }
        void setStudentMajor(char *major) { strcpy(student_major, major); }
        float *getStudentGrades() { return student_grades; }
        void setStudentGrades(float *grades) { memcpy(student_grades, grades, sizeof(float) * 5); }
        float getStudentScore() { return student_score; }
        void setStudentScore(float score) { student_score = score; }
        char *getStudentEmailPassword() { return student_email_password; }
        void setStudentEmailPassword(char *password) { strcpy(student_email_password, password); }

        // public functions
        void registerStudent();
        void getStudentInfo();
        void calculateGPA();
    };


    int main() {
        CStudent student;
        student.registerStudent();
        student.calculateGPA();
        student.getStudentInfo();

        return 0;
    }
void CStudent::registerStudent() {
    cout << "Enter student name: ";
    char name[50];
    cin >> name;
    setStudentName(name);

    cout << "Enter student ID: ";
    int id;
    cin >> id;
    setStudentID(id);

    cout << "Enter student email username: ";
    char email[10];
    cin >> email;
    setStudentEmailUsername(email);

    cout << "Enter student major: ";
    char major[10];
    cin >> major;
    setStudentMajor(major);

    cout << "Enter student grades (5 numbers): ";
    float grades[5];
    for (int i = 0; i < 5; i++) {
        cin >> grades[i];
    }
    setStudentGrades(grades);
}

void CStudent::getStudentInfo() {
    cout << "Student name: " << getStudentName() << endl;
    cout << "Student ID: " << getStudentID() << endl;
    cout << "Student email username: " << getStudentEmailUsername() << endl;
    cout << "Student major: " << getStudentMajor() << endl;
    cout << "Student grades: ";
    float* grades = getStudentGrades();
    for (int i = 0; i < 5; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
    cout << "Student score: " << getStudentScore() << endl;
}

void CStudent::calculateGPA() {
    float* grades = getStudentGrades();
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }
    float gpa = sum / 100;
    setStudentScore(gpa);
}
