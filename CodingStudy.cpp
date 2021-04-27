#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
#include "PizzaHut.h"
#include "Simple.h"

using namespace std;


namespace TW
{
    int aa;
    class sdf
    {

    };
}

CPizzaHut copyConstructor(const CPizzaHut a)
{
    //CPizzaHut a = aaa;
    CPizzaHut pizzaHut("신대방점");
    Pizza TWPizza = pizzaHut.makePizza(EN_GO_P);
    TWPizza.print("태윤");
    Pizza JSPizza = pizzaHut.makePizza(EN_SALAD_P);
    JSPizza.print("지상");
    Pizza GDPizza = pizzaHut.makePizza(EN_SOUSAGE_P);
    GDPizza.print("GD");
    Pizza AAPizza = pizzaHut.makePizza(EN_COMB_P);
    AAPizza.print("AA");

    CPizzaHut pizzaHutB(pizzaHut);

    CPizzaHut pizzaHutB = pizzaHut;  // 복사생성자 호출

    CPizzaHut pizzaHutB;
    pizzaHutB = pizzaHut; // 대입 연산자 오버로딩 함수 호출(없을 경우 디폴트 호출)

    pizzaHutB.printStoreInfo();
    return pizzaHutB;
}

int a()
{
    return 5;
}

int main()
{
    const int gg = a();
    CSimple s;
    CPizzaHut aaa(&s);
    copyConstructor(aaa);

    string TW = "태윤";
    CPizzaHut pizzaHut("강남점");
    CPizzaHut* pizzaHutA = &pizzaHut;

    pizzaHutA->printStoreInfo();

    CPizzaHut& refHut = pizzaHut;

    Pizza TWPizza = pizzaHut.makePizza(EN_GO_P);
    TWPizza.print(TW);
    Pizza JSPizza = pizzaHut.makePizza(EN_SALAD_P);
    JSPizza.print("지상");
    Pizza GDPizza = pizzaHut.makePizza(EN_SOUSAGE_P);
    GDPizza.print("GD");
    Pizza AAPizza = pizzaHut.makePizza(EN_COMB_P);
    AAPizza.print("AA");


    int aa[30];
    int bb[30];

    aa[1] = bb[1];

    pizzaHut.printStoreInfo();
    pizzaHut.setInfo("잠실점", 100, 50);

}