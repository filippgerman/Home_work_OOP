#include "Student.h"
#include <iostream>

std::ostream& operator << (std::ostream& os,const Student& obj){
    os <<obj.name << std::endl
       <<obj.age << std::endl
       << obj.average_mark << std::endl;
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

std::string Student::get_name() {
    return name;
}

int Student::get_age() {
    return age;
}

double Student::get_average_mark() {
    return average_mark;
}



