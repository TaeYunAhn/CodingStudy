#pragma once
#include <string>
#include "Pizza.h"
#include "Simple.h"

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
    // 생성자
    CPizzaHut();
    CPizzaHut(std::string name);
    CPizzaHut(CSimple* simple);
    ~CPizzaHut();

    // 복사 생성자
    CPizzaHut(const CPizzaHut& target)
    {
        name = target.name;
        recipe = target.recipe;
        cheezeCount = target.cheezeCount;
        money = target.money;
        aa = target.aa;
        for ( int i =0; i < 30; i++ )
            asd[i] = target.asd[i];

        pSimple = target.pSimple;

        pSimple = new CSimple;
        *pSimple = *target.pSimple;
    }


private:
    std::string name;
    std::string recipe;
    int cheezeCount;
    int money;

    int* aa;
    int asd[30];
    const CSimple* const pSimple;

public:
   Pizza makePizza(EN_PIZZA_CATEGORY category) const;
   void printStoreInfo();
   void setInfo(std::string _name, int _cheezeCount, int _money = 50, int aaa =100); // 디폴트 매개변수
   bool process(const int& count, int& result); // 참조자 개념
   int process(const int count); // 참조자
    

   bool overLoading(const int a);
   bool overLoading(double a); // 함수 오버로딩
   bool overLoading(double a, int b); // 함수 오버로딩
};

