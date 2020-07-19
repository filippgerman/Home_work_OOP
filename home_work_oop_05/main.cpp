#include <iostream>
#include "Tree.h"

using namespace std;

int main() {

TreeNode node(6);
node.insert(9);
node.insert(5);
node.insert(4);
node.insert(2);
node.insert(10);
node.insert(15);
node.insert(11);

node.print_tree();


cout << "----------------------" << endl;

TreeNode *obj;
obj = node.find_number(11);
obj->print_data();

cout << "----------------------" << endl;
node.clear_tree();
node.print_tree();


return 0;

}
