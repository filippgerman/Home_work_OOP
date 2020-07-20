

#include "Banan.h"
#include <iostream>
using namespace std;

std::string Banan::get_name() const {
    return name;
}

double Banan::get_weight() const {
    return weight;
}

double Banan::get_price() const {
    return price;
}

std::string Banan::get_ripe() const {
    if (ripe)
        return "Yes";
    else
        return "No";
}
