#include "goods.h"

Goods::Goods(const string name, int day, int month, int year, int price, int quantity):
    class_name(name), class_date(day,month,year), class_price(price), class_quantity(quantity)
{

}
string Goods::get_name()
{
    return class_name;
}

Date Goods::get_date()
{
    return class_date;
}

int Goods::get_price()
{
    return class_price;
}

int Goods::get_quantity()
{
    return class_quantity;
}

void Goods::set_quantity(int quantity)
{
    class_quantity=quantity;
}

void Goods::set_name(string name)
{
    class_name=name;
}

void Goods::set_price(int price)
{
    class_price=price;
}
void Goods::set_date(int day, int month, int year)
{
    class_date=Date(day,month,year);
}
