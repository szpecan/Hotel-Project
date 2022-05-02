#include "model/Silver.h"

const double Silver::applyDiscount(const double &price) const {
    if(price < 6)
        return price;
    return 6;
}

const unsigned int Silver::getMaxVehicles() const {
    return 3;
}

std::string Silver::getTypeInfo() const {
    return "Type: Silver";
}

Silver::~Silver() {

}