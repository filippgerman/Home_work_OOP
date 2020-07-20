
#ifndef HOME_WORK_06_GRAPE_H
#define HOME_WORK_06_GRAPE_H
#include "Fruit.h"

class Grape : public Fruit {
    double price;
    double weight;
    std::string name = "";
public:
    Grape(double price, double weight, std::string name): price(price), weight(weight), name(name){}

    std::string get_name() const override;
    double get_price() const override;
    double get_weight() const override;
};


#endif //HOME_WORK_06_GRAPE_H
