#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include "sort.h"
#include "goods.h"
#include "date.h"
#include <fstream>

using namespace std;

void generate(Goods *array, int count)
{
    string name;
    int price;
    int quantity;
    int day, month, year;

    fstream stream;
    stream.open("dontopen.txt");
    for(int i=0; i<count && !stream.eof(); ++i)
    {
        stream>>name;
        array[i].set_name(name);
    }
    for(int i=0; i<count; ++i)
    {
        day=rand()%30+1;
        month=rand()%12+1;
        year=rand()%5+2008;
        price=(rand()%1000)*10;
        quantity=rand()%150;
        array[i].set_price(price);
        array[i].set_quantity(quantity);
        array[i].set_date(day, month, year);
    }
}

void output(Goods *array, int count){

        cout<<"№ "<<" Название "<<" Количество "<<"       Цена       "<<"       Дата "<<endl;
        for(int i = 0; i < count; ++i)
        {
            cout<<i+1<<"  "<<array[i].get_name()<<"     ";
            cout<<array[i].get_quantity()<<"       ";
            cout<<array[i].get_price()<<"        ";
            cout<<array[i].get_date().get_day()<<"."<<array[i].get_date().get_month()<<"."<<array[i].get_date().get_year();
            cout<<endl;
        }
        cout<<endl;
    }


    int main()
    {
        srand(time(NULL));
        int count;
        cout<<"Введите количество элементов базы данных ";
        cin>>count;
        system("clear");
        Goods *array=new Goods[count];
        generate(array,count);
        output(array,count);

        int k, order;
        cout<<"Выберите нужное действие:\n1.Сортировка базы данных\n0.Выход\n";
        cin>>k;
        switch(k)
        {

        case 1:
            system("clear");

            output(array,count);
            cout<<"Выберите вид сортировки:\n1.Cортировка по количеству\n2.Сортировка по цене\n3.Сортировка по названию\n4.Сортировка по дате\n";
            cin>>k;
            switch(k)
            {
            case 1:
                cout<<"1.По возрастанию\n2.По убыванию\n";
                cin>>k;
                switch(k)
                {
                case 1:
                    order=1;
                    break;
                case 2:
                    order=-1;
                    break;
                }
                system("clear");
                sort(array, 0, count-1, cmp_quantity, order);
                output(array,count);
                break;
            case 2:
                cout<<"1.По возрастанию\n2.По убыванию\n";
                cin>>k;
                switch(k)
                {
                case 1:
                    order=1;
                    break;
                case 2:
                    order=-1;
                    break;
                }
                system("clear");
                sort(array, 0, count-1, cmp_price, order);
                output(array,count);
                break;
            case 3:
                cout<<"1.По возрастанию\n2.По убыванию\n";
                cin>>k;
                switch(k)
                {
                case 1:
                    order=1;
                    break;
                case 2:
                    order=-1;
                    break;
                }
                system("clear");
                sort(array, 0, count-1, cmp_name, order);
                output(array,count);
                break;
            case 4:
                cout<<"1.По возрастанию\n2.По убыванию\n";
                cin>>k;
                switch(k)
                {
                case 1:
                    order=1;
                    break;
                case 2:
                    order=-1;
                    break;
                }
                system("clear");
                sort(array, 0, count-1, cmp_date, order);
                output(array,count);
                break;

            }
            break;
        case 0:
            k=0;
            break;

        }
        return 0;

}

