#include <iostream>
#include "Fruit.h"
#include "Apple.h"
#include "Banan.h"
#include "Grape.h"
#include "string"

using namespace std;

int main() {

    const int NUM = 3;
    Fruit *pFruit[NUM ] = {new Apple(10,5,"apple",1), new Banan(7,6,"banana",true), new Grape(12,3,"grape")};

    for (int i = 0; i < NUM ; ++i) {
        double price = pFruit[i]->get_price();
        int weight = pFruit[i]->get_weight();
        string name = pFruit[i]->get_name();
        string color = pFruit[i]->get_color();
        string ripe = pFruit[i]->get_ripe();

        cout << "price : " << price << endl
        <<"weight : " << weight << endl
        <<"name : " << name << endl;
        if (i == 0)
        cout <<"color : " << color << endl;
        else if (i == 1)
        cout <<"ripe : " << ripe << endl;

    }
    return 0;
}
