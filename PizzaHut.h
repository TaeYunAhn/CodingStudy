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
    // ������
    CPizzaHut();
    CPizzaHut(std::string name);
    CPizzaHut(CSimple* simple);
    ~CPizzaHut();

    // ���� ������
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
   void setInfo(std::string _name, int _cheezeCount, int _money = 50, int aaa =100); // ����Ʈ �Ű�����
   bool process(const int& count, int& result); // ������ ����
   int process(const int count); // ������
    

   bool overLoading(const int a);
   bool overLoading(double a); // �Լ� �����ε�
   bool overLoading(double a, int b); // �Լ� �����ε�
};

