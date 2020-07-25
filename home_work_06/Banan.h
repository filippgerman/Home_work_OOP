
#ifndef HOME_WORK_06_BANAN_H
#define HOME_WORK_06_BANAN_H
#include "Fruit.h"

class Banan : public Fruit{
    double price;
    double weight;
    std::string name = "";
    bool ripe;
public:
    Banan(double price, double weight, std::string name, bool ripe):
    price(price), weight(weight), name(name), ripe(ripe){}

    std::string get_name() const override;
    double get_price() const override;
    double get_weight() const override;
    std::string get_ripe() const override ;

};


#endif //HOME_WORK_06_BANAN_H

