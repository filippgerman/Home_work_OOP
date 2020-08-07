#include "Apple.h"
#include <iostream>
using namespace std;

std::string Apple::get_name() const {
    return name;
}

double Apple::get_price() const {
    return price;
}

double Apple::get_weight() const {
    return weight;
}

std::string Apple::show_color() const {
    switch (number_color) {
        case RED:
            return "red";

        case GREEN:
            return "green";

        case YELLOW:
            return "yellow";

        default:
            cout << "there is no such color" << endl;
            return "";
    }
}

string Apple::show_ripe() const {
    return "";
}

void Apple::print_fruit() const {
    cout << "name : " << name << endl
         <<"price : " << price << endl
         <<"weight : " << weight << endl
         <<"color : " << show_color() << endl;
}
