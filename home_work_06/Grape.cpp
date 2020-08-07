//
// Created by isaac on 20.07.2020.
//

#include "Grape.h"
#include <iostream>

using namespace std;

std::string Grape::get_name() const {
    return name;
}

double Grape::get_price() const {
    return price;
}

double Grape::get_weight() const {
    return weight;
}

std::string Grape::show_color() const {
    return "";
}

std::string Grape::show_ripe() const {
    return "";
}

void Grape::print_fruit() const {
    cout << "name : " << name << endl
         <<"price : " << price << endl
         <<"weight : " << weight << endl;
}
