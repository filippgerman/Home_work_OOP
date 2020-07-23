//
// Created by isaac on 21.07.2020.
//

#include "PointerStudent.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using  std::fstream;
using std::ofstream;

PointerStudent::PointerStudent(string path): path(path) {
    pointer = new Student[number_students];
//в самом конструкторе помещаем все элементы в указатель.
    fstream file;
    file.open(path);
    if (!file) {
        cout << "the file did not open" << endl;
        exit(-1);
    }
//узнаем количество студентов. т.к. счет на единицу больше получается, то в конце отнимаем единицу.
    int count = 0;
    for (int i = 0; !file.eof(); i++) {
        this->insert();
        file >> pointer[i];
        count++;
    }
    number_students = count - 1;
}

Student &PointerStudent::operator[](const int index) const {
    return pointer[index];
}

Student &PointerStudent::operator[](const int index) {
    return pointer[index];
}
//выделение памяти для добавления студента.
void PointerStudent::insert() {
    Student *temp_p = new Student[number_students];
    for (int i = 0; i < number_students; i++)
        temp_p[i] = pointer[i];

    delete[] pointer;
    pointer = new Student[number_students + 1];
    for (int i = 0; i < number_students; i++)
        pointer[i] = temp_p[i];
    number_students++;


    delete[] temp_p;
    temp_p = nullptr;


}

void PointerStudent::add_students( string path) {
    fstream file;
    file.open(path, std::ios::in | std::ios:: out | std::ios::app);
    if (!file) {
        cout << "the file did not open" << endl;
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
                this->insert();

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

void PointerStudent::print(string path){
    fstream file;
    file.open(path, std::ios::in | std::ios::out | std::ios::app);
    if (!file) {
        cout << "the file did not open" << endl;
        exit(-1);
    }

    for (int i = 0; i < number_students; i++)
            file >> pointer[i];


    for (int i = 0; i < number_students ; i++)
        cout << pointer[i] << endl;

    file.close();
}

void PointerStudent::del_last_entry(std::string path) {

    number_students -= 1;
    Student *temp = new Student [number_students];
    for (int i = 0; i < number_students; i++)
        temp[i] = pointer[i];

    delete [] pointer;
    pointer = new Student[number_students];

    for (int i = 0; i < this->number_students; i++)
        pointer[i] = temp[i];

    delete[] temp;
    temp = nullptr;

    if (remove("student.txt") != 0)
       cout << "problems with deletion" << endl;

    ofstream file;
    file.open(path);
    if (!file)
        cout << "the file did not open" << endl;
    for (int i = 0; i < number_students; ++i)
        file << pointer[i];

    file.close();



}


