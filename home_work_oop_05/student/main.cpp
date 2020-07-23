#include <iostream>
#include "Student.h"
#include <vector>
#include <fstream>
#include <string>
#include "PointerStudent.h"

using namespace std;

int main() {

    string path = "student.txt";
    PointerStudent array(path);
do{
    cout << "selected action: " << endl
    << "1. add a student" << endl
    << "2. print the list of students" << endl
    << "3. delete last entry " << endl
    << "4. exit" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            array.add_students(path);
            break;
        case 2:
            array.print(path);
            break;
        case 3:
            array.del_last_entry(path);
            break;
        case 4:
            return 0;
        default: {
            cout << "eror" << endl;
            break;
        }
    }
}while(true);
}
