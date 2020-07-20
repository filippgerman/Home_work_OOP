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

std::string Apple::get_color() const {
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
