#include "model/Bronze.h"

const double Bronze::applyDiscount(const double &price) const {
    if(price < 3)
        return price;
    return 3;
}

const unsigned int Bronze::getMaxVehicles() const {
    return 2;
}

std::string Bronze::getTypeInfo() const {
    return "Type: Bronze";
}

Bronze::~Bronze() {

}
