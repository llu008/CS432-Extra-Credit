#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int numStudents = 5;

    string name[numStudents];
    int age[numStudents];
    float GPA[numStudents];
    string gradeLevel[numStudents];

    ifstream inputFile;
    inputFile.open("inputFile.txt");

    for(int i = 0; i < numStudents; i++) {
        inputFile >> name[i]
                  >> age[i]
                  >> GPA[i]
                  >> gradeLevel[i];
    }

    for(int i = 0; i < numStudents; i++) {
        cout << name[i] << " "
             << age[i] << " "
             << GPA[i] << " "
             << gradeLevel[i] << endl;
    }

    inputFile.close();
    
    return 0;
}