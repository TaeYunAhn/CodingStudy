#include <iostream>
#include "PizzaHut.h"
using namespace std;

CPizzaHut::CPizzaHut()
{
    cheezeCount = 1000;
    money = 1000000;
}

CPizzaHut::CPizzaHut(std::string _name)
{
    cheezeCount = 1000;
    money = 1000000;
    name = _name;
}

CPizzaHut::~CPizzaHut()
{
}


Pizza CPizzaHut::makePizza(EN_PIZZA_CATEGORY category)
{
    Pizza pizza;
    switch ( category )
    {
    case EN_SALAD_P:
    {
        Pizza saladPizza(EN_TOMATO, 20000, "������ ����");
        pizza = saladPizza;
    }
    break;
    case EN_GO_P:
    {
        Pizza goPizza(EN_TOMATO, 25000, "�������� ����");
        pizza = goPizza;
    }
    break;
    case EN_SOUSAGE_P:
    {
        Pizza souagePizza(EN_TOMATO, 18000, "�Ҽ��� ����");
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
    cout << "���� ġ�� ����: " << cheezeCount << ", ��: " << money << endl;
}
