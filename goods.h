#ifndef GOODS_H
#define GOODS_H

#include <iostream>
#include "date.h"
using namespace std;
/*

*/
class Goods
{
private:
    string class_name;
    Date class_date;
    int class_price;
    int class_quantity;
public:
    Goods() {};
    Goods(const string name, int day, int month, int year, int price, int quantity);
    ~Goods() {};
    string get_name();
    Date get_date();
    int get_price();
    int get_quantity();
    void set_price(int price);
    void set_quantity(int quantity);
    void set_name(const string name);
    void set_date(int day, int month, int year);
};

#endif // GOODS_H
