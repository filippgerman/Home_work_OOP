#include <iostream>
#include "Number.h"
#include <stdexcept>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int limit = 11;
    string number = "";

    cout << "Введите ваш номер телефона: " << endl;
    try {
        getline(cin, number);
        if (number.length() != 11)
            throw exception();
    }

    catch (exception ex) {

        if (number.length() < limit) {
            do
            {
                cout << "ошибка, слишком мало символов" << endl;
                cout << "Введите ваш номер телефона: " << endl;
                getline(cin, number);
            }while (number.length() != limit);

        }
        
    }

    Number obj(number);
    cout << obj << endl;
    obj.format_to_standard();
    cout << obj << endl;
    obj.format_for_user();
    cout << obj << endl;

    return 0;
}
