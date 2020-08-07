

#ifndef HOME_WORK_06_FRUIT_H
#define HOME_WORK_06_FRUIT_H
#include <string>

class Fruit {
public:
    virtual double get_price () const = 0;
    virtual double get_weight () const = 0;
    virtual std::string get_name () const = 0;

    virtual std::string show_color () const  = 0;
    virtual std::string show_ripe() const = 0;

    virtual void print_fruit() const = 0;

    virtual ~Fruit(){}
};

#endif
