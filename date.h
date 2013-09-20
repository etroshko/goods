#ifndef DATE_H
#define DATE_H

class Date
{
private:
int class_day;

    int class_month;
    int class_year;

public:
    Date() {};
    Date(int, int, int);
    ~Date() {};
    int get_year();
    int get_month();
    int get_day();
    void set_year(int);
    void set_month(int);
    void set_day(int);
};

#endif // DATE_H
