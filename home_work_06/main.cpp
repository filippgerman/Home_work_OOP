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
        pFruit[i]->print_fruit();
        cout << endl << endl;
    }
    return 0;
}
