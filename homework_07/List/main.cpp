#include <iostream>
#include "List.h"


using namespace std;

int main() {
    List<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_front(15);
    list.insert(25,1);
    list.show_list();


    cout << "======================" << endl;

    list.begin();
    cout << *list << endl;
    ++list;
    cout << *list << endl;
    list++;
    cout << *list << endl;
    --list;
    cout << *list << endl;
    list--;
    cout << *list << endl;
    list.end();
    list.pop_front();
    cout << *list << endl;
    list.pop_front();
    cout << *list << endl;
    list.clear();



    return 0;
}
