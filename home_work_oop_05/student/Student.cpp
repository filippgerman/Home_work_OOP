#include "Student.h"

std::ostream& operator << (std::ostream& os,const Student& obj){
    os << "name = " <<obj.name << std::endl
       << "age = " << obj.age << std::endl
       << "average-mark = " << obj.average_mark;
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



