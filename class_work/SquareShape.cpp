#include "SquareShape.h"

std::string SquareShape::get_name() const {
    return "Square";
}
double SquareShape::get_area() const {
    return length * length;
}

double SquareShape::get_perimeter() const{
    return length * 4;
}