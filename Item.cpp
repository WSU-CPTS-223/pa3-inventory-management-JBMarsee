#include "Item.h"

Item::Item() {

    //Initialize important variables for future editing
    ID = "NA";
    name = "NA";
    category = {};

}
    //getters & setters 
    std::string Item::getId() {
        return this->ID;
    }

    std::vector<std::string> Item::getCategory() {
        return this->category;
    }

    std::string Item::getName() {
        return this->name;
    }
    
    //Print function
    void Item::printItem() {
        std::cout << "ID: " << this->ID << "\n";
        std::cout << "Name: " << this->name << "\n";
        if(category.empty()) {
            std::cout << "NA\n";
        }
        else {
            for(int i = 0; i < this->category.size(); i++) {
                std::cout << category[i] << " | ";
            }
        }
    }

    //check to see if Item has a certain category
    bool Item::hasCategory(std::string& myCategory) {
        for(int i = 0; i < this->category.size(); i++) {
            if(category[i] == myCategory) {
                return true;
            }
        }
        return false;
    }