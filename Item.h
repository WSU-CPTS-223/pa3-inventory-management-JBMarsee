#include <iostream>
#include <string>
#include <vector>

class Item {
    public: 
    //Constructor
    Item();
    //getters
    std::string getId();

    std::vector<std::string> getCategory(); 

    std::string getName();

    //Print function
    void printItem();

    //Check to see if item has a given category
    bool hasCategory(std::string& myCategory);

    private:
    std::string ID;
    std::string name;
    std::vector<std::string> category;
};

