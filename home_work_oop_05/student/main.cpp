#include <iostream>
#include "Student.h"
#include <vector>
#include <fstream>

using namespace std;

int main() {

 const int SUM_STUDENTS = 10;
    Student array[SUM_STUDENTS];


    fstream file;
    file.open("/home/isaac/CLionProjects/student/student.txt", fstream::in);
    if (!file)
        cout << "file didnt open!!!!" << endl;
    else {
        cout << "file open" << endl;
            for (int i = 0; !file.eof();i++)
                file >> array[i];

            for(int i = 0; i < SUM_STUDENTS;i++)
                cout << array[i] << endl;

    }
    file.close();

    return 0;

}
