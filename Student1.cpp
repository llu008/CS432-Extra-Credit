#include <iostream>
#include <fstream>

using namespace std;

struct Student
{
    string name;
    int age;
    float GPA;
    string gradeLevel;
};

int main()
{
    const int numStudents = 5;

    ifstream inputFile;
    inputFile.open("inputFile.txt");

    Student student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        inputFile >> student[i].name
                  >> student[i].age
                  >> student[i].GPA
                  >> student[i].gradeLevel;
    }

    for (int i = 0; i < numStudents; i++) {
        cout << student[i].name << " "
             << student[i].age << " "
             << student[i].GPA << " "
             << student[i].gradeLevel << endl;
    }

    inputFile.close();

    return 0;
}