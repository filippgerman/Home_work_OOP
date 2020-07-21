#include <iostream>
#include "Student.h"
#include <vector>
#include <fstream>
#include <string>
#include "PointerStudent.h"

using namespace std;

int main() {

    string path = "student.txt";
    PointerStudent array(0);

    cout << "selected action: " << endl
    << "1. add a student" << endl
    << "2. print the list of students" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            array.add_students(path);
            break;
        case 2:{
            fstream file;
            file.open(path, std::ios::in | std::ios::out | std::ios::app);
            if (!file) {
                cout << "file didnt open!!!!" << endl;
                exit(-1);
            }
            for (int i = 0; !file.eof(); i++) {
                array.insert();
                file >> array[i];
            }

            for (int i = 0; i < array.get_number_students() - 1; i++) {
                cout << array[i] << endl;
            }
            file.close();
            break;
        }
        case 3:
        default: {
            cout << "eror" << endl;
            break;
        }
    }

    return 0;
}
