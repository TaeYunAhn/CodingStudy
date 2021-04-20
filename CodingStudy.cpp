#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
#include "PizzaHut.h"

using namespace std;


namespace TW
{
    int aa;
    class sdf
    {

    };
}

int main()
{
    string TW = "태윤";
    CPizzaHut pizzaHut("강남점");
    pizzaHut.printStoreInfo();

    Pizza TWPizza = pizzaHut.makePizza(EN_GO_P);
    TWPizza.print(TW);
    Pizza JSPizza = pizzaHut.makePizza(EN_SALAD_P);
    JSPizza.print("지상");
    Pizza GDPizza = pizzaHut.makePizza(EN_SOUSAGE_P);
    GDPizza.print("GD");
    Pizza AAPizza = pizzaHut.makePizza(EN_COMB_P);
    AAPizza.print("AA");

    pizzaHut.printStoreInfo();

}