// Project Title: Grocery List Manager

// created header .h file called "GroceryList.h"
//used a header guard (#ifndef, #define, #endif) to prevent 
//file from being included twice.
#ifndef GROCERYLIST_H
#define GROCERYLIST_H
// We use the macro (the rule/tool that runs before the compiler) MAX_ITEMS to 
//limit the number of items allowed in the list
#define MAX_ITEMS 100

#include <vector>
#include <string>

//Here we will declare a class GroceryList for our items:
class GroceryList {
    public:
    void showList() const;
//we create the function and a function parameter as a 
//placeholder to be later used by being called , it behaves like a local variable.
    void removeItem(int index);
// we will move the list of the fruits and vegetable in a more secure area
// called (private: )so it can't be modified by other parts of the program
    private:
// we will also create vectors to separate the grocery lists
    std::vector<std::string> fruit_list;
    std::vector<std::string> vegetable_list;
};
#endif

