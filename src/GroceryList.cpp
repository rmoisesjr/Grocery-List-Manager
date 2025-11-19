//Creating the "GroceryList.cpp"
//we will include the .h file that has our class and the 
//necessary libraries to manage our grocery list.
#include "GroceryList.h"
#include <iostream>


//declaring the vectors from the GroceryList class.
//and adding values to the vectors

std::vector<std::string> fruit_list = {"apple, banana, pear, strawberry"};
std::vector<std::string> vegetable_list = {"brocoli, tomato, carrot, potato "};


// we are going to code the functions of showlist.
void showList(){
    for (std::string fruit : fruit_list){

    }
}

void removeItem(int index){

}

//      - Check if items.size() >= MAX_ITEMS, if so print an error using std::cerr
//      - Otherwise, add the item to the vector


// - Implement showList:
//      - Use an iterator (for loop with auto it) to print each item with std::cout
// - Implement removeItem:
//      - Use items.at(index) to safely access the item
//      - If valid, erase it from the vector
//      - If invalid, catch the exception and print an error using std::cerr
