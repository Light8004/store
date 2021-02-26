#include <iostream>
#include <fstream> 


class item {
protected: 
std::string iName; 
double iPrice; 

public: 

item(std::string name, double price){
    iName = name; 
    iPrice= price; 
};

std::string getName(){

return iName; 
};

double getPrice(){
    return iPrice; 
}



};

class fruit: public item{

fruit(std::string name, double price){

}

};