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
    // Removed an item from the vector using the user provided index.
    // Ensured the index is valid (within bounds of the vector).
    if (index >= 0 && index < fruit_list.size())
    {
        // got an iterator pointing to the element at the specified index.
        auto current = fruit_list.begin() + index;
        // Erase the element at the iterator position.
        fruit_list.erase(current);
    }
}

void addItem(const std::string& item)
 {
   int max_size = 6;
//checks if the list is already full.
   if (fruit_list.size() >= max_size){
//If it's full, print an error message.
     std::cerr << "List is full.\n";
     }else{
// - If it's not full, add the new item a (new fruit) to the list.
    fruit_list.push_back(item);
     }
}

// showList:
// - Imagine you need to move through each element of a structure one by one.
// - What tool lets you "walk" through a container without using plain indexes?
// - As you walk through it, think about how to show each element to the user using the standard output stream.
