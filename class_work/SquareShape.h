//
// Created by isaac on 19.07.2020.
//

#ifndef UNTITLED1_SQUARESHAPE_H
#define UNTITLED1_SQUARESHAPE_H

#include "Shape.h"
class SquareShape : public Shape {

    int length;

public:
    SquareShape(int length) : length(length) {}

    std::string get_name() const override;
    double get_area() const override;
    double  get_perimeter() const override ;




};




#endif //UNTITLED1_SQUARESHAPE_H
