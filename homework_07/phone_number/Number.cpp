//
// Created by isaac on 28.07.2020.
//

#include <cstring>
#include "Number.h"
using std::cout;
using std::endl;
using std::string;

void Number::format_to_standard() {
    string result = "";
    for(int i = 0; i < number.length(); i++){
        if (i < 2 && number[i] == '8') {
            result.push_back('7');
            continue;
        }
        for (int j = 0; j < standart_numbers.length(); j++) {
            if (number[i] == standart_numbers[j])
                result.push_back(number[i]);
        }

    }

    this->number = result;
}

void Number::format_for_user() {
    string result = "+";
    for(int i = 0; i < number.length(); i++) {
        if(i == 0) {
            result.push_back(number[i]);
            result.push_back(' ');
            result.push_back('(');
            continue;
        }
        else if(i == 4) {
            result.push_back(')');
            result.push_back(' ');
        }
        else if (i == 7 || i == 9)
            result.push_back('-');

        result.push_back(number[i]);

    }
    this->number = result;
}

std::ostream &operator<<(std::ostream &out, const Number &obj) {
    return out << obj.number;
}
