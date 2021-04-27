#include <iostream>
#include "PizzaHut.h"
using namespace std;

CPizzaHut::CPizzaHut()
{
    cheezeCount = 1000;
    money = 1000000;
    aa = new int;
    *aa =3;
    pSimple = new CSimple;
}

CPizzaHut::CPizzaHut(std::string _name)
{
    cheezeCount = 1000;
    money = 1000000;
    name = _name;
}

CPizzaHut::CPizzaHut(CSimple* simple)
{
    pSimple = simple;
}

CPizzaHut::~CPizzaHut()
{
        delete aa;
        delete pSimple;
}

Pizza CPizzaHut::makePizza(EN_PIZZA_CATEGORY category) const
{
    Pizza pizza;
    switch ( category )
    {
    case EN_SALAD_P:
    {
        Pizza saladPizza(EN_TOMATO, 20000, "샐러드 피자");
        pizza = saladPizza;
    }
    break;
    case EN_GO_P:
    {
        Pizza goPizza(EN_TOMATO, 25000, "고르곤졸라 피자");
        pizza = goPizza;
    }
    break;
    case EN_SOUSAGE_P:
    {
        Pizza souagePizza(EN_TOMATO, 18000, "소세지 피자");
        pizza = souagePizza;
    }
    break;
    case EN_CHEEZE_P:
        break;
    case EN_COMB_P:
        break;
    default:
        break;
    }

    cheezeCount--;
    money += pizza.price;
    return pizza;
}

void CPizzaHut::printStoreInfo()
{
    cout << "현재 치즈 개수: " << cheezeCount << ", 돈: " << money << endl;

    CSimple s;
    s.a;
}

void CPizzaHut::setInfo(std::string name, int cheezeCount, int money, int aaa)
{
    this->name = name;
    this->cheezeCount = cheezeCount;
    this->money = money;
}

bool CPizzaHut::process(const int& count, int& result)
{
    if ( count == 0 )
    {
        result = count + 100;
        return false;
    }
    else
    {
        result = count - 100;
        return true;
    }
}

int CPizzaHut::process(int count)
{
    if ( count == 0 )
    {
        return count + 100;
    }
    else
    {
        return count - 100;
    }
}

bool CPizzaHut::overLoading(const int a)
{
    return a == 5;
}

bool CPizzaHut::overLoading(double a)
{
    return a == 3;
}

bool CPizzaHut::overLoading(double a, int b)
{
    return a == b;
}