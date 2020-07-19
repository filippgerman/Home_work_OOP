//
// Created by isaac on 19.07.2020.
//

#ifndef UNTITLED1_CIRCLESHAPE_H
#define UNTITLED1_CIRCLESHAPE_H

#include "Shape.h"
class CircleShape : public Shape  {
    double radius;
    const static double PI;
public:

    CircleShape(double radius) : radius (radius) {}

    std::string get_name() const override;
    double get_perimeter() const override;
    double get_area() const override;
};


#endif //UNTITLED1_CIRCLESHAPE_H
