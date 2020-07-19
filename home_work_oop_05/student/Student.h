//
// Created by isaac on 16.07.2020.
//

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H

#include <string>
#include <iostream>

class Student{
std::string name;
int age;
double average_mark;

public:
    Student(std::string name, int age, double average_mark): name(name), age(age), average_mark(average_mark){};
    Student();

    friend std::ostream& operator << (std::ostream& os,const Student& obj);
    friend  std::istream& operator >> (std::istream& in, Student& obj);


};

std::ostream& operator << (std::ostream& os,const Student& obj){
    os << "name = " <<obj.name << std::endl
    << "age = " << obj.age << std::endl
    << "average-mark; = " << obj.average_mark;
    return os;
}

std::istream& operator >> (std::istream& in, Student& obj){
    in >> obj.name >> obj.age >> obj.average_mark;
    return in;
}


Student::Student(){
    this->name = {};
    this->age = 0;
    this->average_mark = 0;
}


#endif //STUDENT_STUDENT_H
