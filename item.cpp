#include <iostream>
#include <string>

class item {
public:
    item(std::string name, double price) : iName(name), iPrice(price) {}

    std::string getName() {
        return iName;
    }

    double getPrice() {
        return iPrice;
    }

protected:
    std::string iName;
    double iPrice;
};

class fruit : public item {
    fruit(std::string name, double price) : item(name, price) {}
};