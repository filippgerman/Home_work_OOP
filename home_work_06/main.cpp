#include <iostream>
#include "Fruit.h"
#include "Apple.h"
#include "Banan.h"
#include "Grape.h"
#include "string"

using namespace std;

int main() {

    const int NUM = 3;
    Fruit *pFruit[NUM ] = {new Apple(10,5,"apple",1),
                           new Banan(7,6,"banana",true),
                           new Grape(12,3,"grape")};

    for (int i = 0; i < NUM ; ++i) {
        double price = pFruit[i]->get_price();
        int weight = pFruit[i]->get_weight();
        string name = pFruit[i]->get_name();
        string color = pFruit[i]->get_color();
        string ripe = pFruit[i]->get_ripe();

        cout << "name : " << name << endl
        <<"price : " << price << endl
        <<"weight : " << weight << endl;
        if (pFruit[i]->get_color() != "")
        cout <<"color : " << color << endl;
        else if (pFruit[i]->get_ripe() != "")
        cout <<"ripe : " << ripe << endl;
        cout << endl;

    }
    return 0;
}
