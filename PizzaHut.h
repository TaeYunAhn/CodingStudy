#pragma once
#include <string>
#include "Pizza.h"

enum EN_PIZZA_CATEGORY
{
    EN_SALAD_P,
    EN_GO_P,
    EN_SOUSAGE_P,
    EN_CHEEZE_P,
    EN_COMB_P,
};

class CPizzaHut
{
public:
    CPizzaHut();
    CPizzaHut(std::string name);
    ~CPizzaHut();

private:
    std::string name;
    std::string recipe;
    int cheezeCount;
    int money;


public:
   Pizza makePizza(EN_PIZZA_CATEGORY category);
   void printStoreInfo();

};

