
// Step 2: Create "GroceryList.cpp"
// - Include "GroceryList.h" and <iostream>
// - Implement addItem:
//      - Check if items.size() >= MAX_ITEMS, if so print an error using std::cerr
//      - Otherwise, add the item to the vector
// - Implement showList:
//      - Use an iterator (for loop with auto it) to print each item with std::cout
// - Implement removeItem:
//      - Use items.at(index) to safely access the item
//      - If valid, erase it from the vector
//      - If invalid, catch the exception and print an error using std::cerr
