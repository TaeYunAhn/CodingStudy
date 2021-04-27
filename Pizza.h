#pragma once
#include <string>
enum EN_SOURCE
{
    EN_TOMATO,
    EN_CHEEZE,
    EN_GO,
};

//// 1��
//typedef struct s_point
//{
//    int aa;
//} t_point;
//
//// 2��
//struct s_point
//{
//   int aa;
//};
//typedef s_point t_point;

/// 1���� 2���� ����.

//typedef std::map<int, vector<std::string>> intVecMap;


struct Pizza
{
    // ������ �� �Ҹ���
    Pizza()
    {
        dough = 0;
        cheeze = 0;
        source = 0;
        price = 0;
    }

    Pizza(int _source, int _price, std::string _name)
    {
        dough = 0;
        cheeze = 0;
        price = _price;
        source = _source;
        name = _name;
    }

    ~Pizza() {}

    void print(std::string _name)
    {
        std::cout << _name << "�� " << name << "�� ���׽��ϴ�.\n";
    }

    // ��� ����
    int dough;
    int cheeze;
    int source;
    int price;
    std::string name;
};