//
// Created by isaac on 21.07.2020.
//

#include "PointerStudent.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

PointerStudent::PointerStudent(int number):number_students(number) {
    pointer = new Student[number_students];
}

Student &PointerStudent::operator[](const int index) const {
    return pointer[index];
}

Student &PointerStudent::operator[](const int index) {
    return pointer[index];
}

void PointerStudent::insert() {
    Student *temp_p = new Student[number_students];
    for (int i = 0; i < number_students; i++)
        temp_p[i] = pointer[i];

    delete[] pointer;
    pointer = new Student[number_students + 1];
    for (int i = 0; i < number_students; ++i)
        pointer[i] = temp_p[i];
    number_students++;


    delete[] temp_p;
    temp_p = nullptr;


}

int PointerStudent::get_number_students() {
    return number_students;
}

void PointerStudent::add_students(string path) {
    std::fstream file;
    file.open(path, std::ios::in | std::ios:: out | std::ios::app);
    if (!file) {
        cout << "file didnt open!!!!" << endl;
        exit(-1);
    }

        do {
                string name;
                int age;
                double average_mark;

                cin.ignore();
                cout << "enter name: ";
                getline(cin, name);
                cout << "enter age: ";
                cin >> age;
                cout << "enter average mark: ";
                cin >> average_mark;

                file << name << endl << age << endl << average_mark << endl;

                cout << "do you want continue? \"Yes\"/\"No\"" << endl;
                string answer;
                cin >> answer;
                if (answer == "Yes" || answer == "yes" || answer == "Y" || answer == "y" || answer == "Ye" ||
                    answer == "ye")
                    continue;
                else if (answer == "No" || answer == "no" || answer == "n" || answer == "N" || answer == "NO")
                    break;
                else {
                    cout << "you entered an invalid character" << endl;
                    break;
                }

            } while (true);
        file.close();
}


