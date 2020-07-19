//
// Created by isaac on 19.07.2020.
//

#ifndef UNTITLED1_SHAPE_H
#define UNTITLED1_SHAPE_H
#include <string>

class Shape {
public:
    virtual std::string get_name() const {return "";}
    virtual double get_area() const {return 0;}
    virtual double get_perimeter() const {return 0;}

    virtual ~Shape(){}
};


#endif //UNTITLED1_SHAPE_H
