//
// Created by isaac on 19.07.2020.
//

#include "CircleShape.h"

const double CircleShape::PI = 3.14;

std::string CircleShape::get_name() const {
    return "Circle";
}

double CircleShape::get_perimeter() const {
    return 2* PI * radius;
}

double CircleShape::get_area() const {
    return PI * radius * radius;
}
