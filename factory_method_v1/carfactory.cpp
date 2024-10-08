#include "carfactory.h"
#include "fiat.h"
#include "honda.h"
#include "toyota.h"

CarFactory::CarFactory() {}

BaseCar *CarFactory::createCar(QString type)// Type could be "F", "H", or "T" if different no car type is instanciated
{
    BaseCar *car = nullptr;

    if(type == "F"){
        car = new Fiat();
    } else if(type == "H"){
        car = new Honda();
    }else if(type == "T"){
        car = new Toyota();
    }
    return car;
}
