//Creating the "GroceryList.cpp"
//we will include the .h file that has our class and the 
//necessary libraries to manage our grocery list.
#include "GroceryList.h"
#include <iostream>


//declaring the vectors from the GroceryList class.
//and adding values to the vectors

std::vector<std::string> fruit_list = {"apple", "banana", "pear", "strawberry"};
std::vector<std::string> vegetable_list = {"brocoli", " tomato", "carrot", "potato"};

// we are going to code the functions of showlist.
void showList(){
    //it's more efficient to use the & when taking out each string from the vector
    //list it saves memeory and its more faster for future bigger output 
    for (std::string& fruits : fruit_list){
        std::cout << fruits  << " ";
    }
}

void removeItem(int index)
{
    // Remove an item from the vector using the user provided index.
    // Ensure the index is valid (within bounds of the vector).
    if (index >= 0 && index < fruit_list.size())
    {
        // Get an iterator pointing to the element at the specified index.
        auto current = fruit_list.begin() + index;
        // Erase the element at the iterator position.
        fruit_list.erase(current);
    }
}

// addItem:
// - Think about what should happen when a structure has a limit and you're asked to put one more thing into it.
// - Consider how you would check that limit before accepting the new thing.
// - If the limit is reached, think about which output stream is meant for problems rather than normal messages.
// - If there is room, figure out which operation grows the structure by adding the new element.

// showList:
// - Imagine you need to move through each element of a structure one by one.
// - What tool lets you "walk" through a container without using plain indexes?
// - As you walk through it, think about how to show each element to the user using the standard output stream.

// removeItem:
// - Picture what happens when someone asks for a position in a structure that might not exist.
// - Think about which access method will complain loudly when you try an invalid position so you can react properly.
// - If the position is real, consider how you would remove the element at that spot using the structure's own tools.
// - If the position is not real, think about how you'd catch that failure and report it using the error stream.
