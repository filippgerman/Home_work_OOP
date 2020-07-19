#include <iostream>
using namespace std;
#include "Shape.h"
#include "SquareShape.h"
#include "CircleShape.h"
#include <string>
using namespace  std;

int main() {

    Shape *pShapes[3] = {new SquareShape(10), new CircleShape(5), new CircleShape(15)};

    for (int i = 0; i < 3; ++i) {
        double area = pShapes[i]->get_area();
        double perimeter = pShapes[i] ->get_perimeter();
        string  name = pShapes[i] ->get_name();

        cout << name << "   " << area << "   " << perimeter << endl;
    }

    for (int j = 0; j < 3; ++j) {
        delete pShapes[j];
    }

    return 0;
}
