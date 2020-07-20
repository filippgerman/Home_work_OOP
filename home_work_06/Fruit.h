

#ifndef HOME_WORK_06_FRUIT_H
#define HOME_WORK_06_FRUIT_H
#include <string>

class Fruit {
public:
    virtual double get_price () const {return 0;}
    virtual double get_weight () const {return 0;}
    virtual std::string get_name () const { return "";}

    virtual std::string get_color () const {return "";}
    virtual std::string get_ripe() const {return "";}

    ~Fruit(){}
};

#endif
