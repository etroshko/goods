#include "date.h"

Date::Date(int day, int month, int year):
    class_day(day), class_month(month), class_year(year)
{

}

int Date::get_year()
{
    return class_year;
}

int Date::get_month()
{
    return class_month;
}

int Date::get_day()
{
    return class_day;
}

void Date::set_year(int year)
{
    class_year=year;
}

void Date::set_month(int month)
{
    class_month=month;
}

void Date::set_day(int day)
{
    class_day=day;
}

