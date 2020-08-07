//
// Created by isaac on 28.07.2020.
//

#ifndef HOMEWORK_07_NUMBER_H
#define HOMEWORK_07_NUMBER_H
#include <iostream>
#include <string>
using std::string;

class Number {
string number;
string standart_numbers = "987654321";

public:
    Number (string num): number(num) {};
    void format_to_standard();
    void format_for_user();

    friend std::ostream& operator << (std::ostream &out, const Number &obj);

};


#endif //HOMEWORK_07_NUMBER_H
