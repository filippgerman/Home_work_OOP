

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

std::string Banan::show_ripe() const {
    if (ripe)
        return "Yes";
    else
        return "No";
}

string Banan::show_color() const {
    return "";
}

void Banan::print_fruit() const {
    cout << "name : " << name << endl
         <<"price : " << price << endl
         <<"weight : " << weight << endl
         <<"ripe : " << show_ripe() << endl;
}


