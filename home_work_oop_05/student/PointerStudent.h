
#ifndef STUDENT_POINTERSTUDENT_H
#define STUDENT_POINTERSTUDENT_H
#include "Student.h"
#include <fstream>

class PointerStudent {
    Student* pointer;
    int number_students;

public:
    PointerStudent(int number);

    Student& operator[] (const int index) const;
    Student& operator[] (const int index);

    void insert();

    int get_number_students();
    void add_students(std::string path);

    ~PointerStudent() {delete[] pointer; pointer = nullptr;}

};


#endif //STUDENT_POINTERSTUDENT_H
