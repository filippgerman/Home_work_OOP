
#ifndef HOME_WORK_06_APPLE_H
#define HOME_WORK_06_APPLE_H
#include "Fruit.h"

class Apple : public Fruit {
    double price;
    double weight;
    std::string name = "";
    int number_color;
    enum Color {
        RED,
        GREEN,
        YELLOW
    };
public:
    Apple(double price, double weight, std::string name,int  number_color):
    price(price), weight(weight), name(name), number_color(number_color) {}

    std::string get_name() const override;
    double get_price() const override;

    std::string show_ripe() const override;

    void print_fruit() const override;

    double get_weight() const override;
    std::string  show_color() const override ;
};


#endif
