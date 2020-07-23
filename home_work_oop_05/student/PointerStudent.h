
#ifndef STUDENT_POINTERSTUDENT_H
#define STUDENT_POINTERSTUDENT_H
#include "Student.h"
#include <fstream>

class PointerStudent {
    Student* pointer;
    int number_students = 0;
    std::string path;

public:
    PointerStudent(std::string path);

    Student& operator[] (const int index) const;
    Student& operator[] (const int index);

    void insert();

    void add_students(std::string path);
    void print(std::string path);
    void del_last_entry (std::string path);

    ~PointerStudent() {delete[] pointer; pointer = nullptr;}

};


#endif //STUDENT_POINTERSTUDENT_H
