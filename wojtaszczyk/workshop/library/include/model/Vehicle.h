

#ifndef CARRENTAL_VEHICLE_H
#define CARRENTAL_VEHICLE_H
#include <iostream>
#include "typedef.h"
#include <vector>
#include <algorithm>
#include <boost/date_time.hpp>


class Vehicle{
private:
    std::string plateNumber;
    unsigned int basePrice;
    bool retend = false;
public:
    Vehicle(const std::string &Initial_plateNUmber,const unsigned int &Initial_basePrice);
    const std::string &getVehicleplateNumber() const;
    const unsigned int &getVehiclebasePrice() const ;
    bool isRetend() const;
    void setVehicleplateNumber(const std::string &ChangedplateNumber);
    void setVehiclebasePrcie(const unsigned int &ChangedbasePrice);
    virtual std::string getVehicleInfo() const;
    void setRetend(bool changeretend);
    virtual double getActualRentalPrice() const;
    virtual ~Vehicle()=0;
};



#endif //CARRENTAL_VEHICLE_H
