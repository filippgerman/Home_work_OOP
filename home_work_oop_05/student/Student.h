

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H

#include <string>
#include <iostream>



class Student{
std::string name;
int age;
double average_mark;


public:

    Student(std::string name, int age, double average_mark): name(std::move(name)), age(age), average_mark(average_mark){};
    Student();

    std::string get_name();
    int get_age();
    double get_average_mark();

    friend std::ostream& operator << (std::ostream& os,const Student& obj);
    friend std::istream& operator >> (std::istream& in, Student& obj);


};

#endif //STUDENT_STUDENT_H
