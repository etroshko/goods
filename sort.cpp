#include "sort.h"
int partition(Goods *array, int l, int r, int (*cmp)(Goods,Goods), int order)
{
    int i,j;
    Goods temp;
    i=l;
    while(order*cmp(array[i],array[r])<0)
        ++i;
    for(j=i; j<r; ++j)
    {
        if(order*cmp(array[j],array[r])<0)
        {
            temp=array[j];
            array[j]=array[i];
            array[i]=temp;
            ++i;
        }
    }
    temp=array[i];
    array[i]=array[r];
    array[r]=temp;
    return i;
}

void sort(Goods *array, int l, int r, int (*cmp)(Goods,Goods), int order)
{
    int m;
    if(l<r)
    {
        m=partition(array,l,r, cmp,order);
        sort(array,l,m-1, cmp,order);
        sort(array,m+1,r, cmp,order);
    }
}

int cmp_price (Goods a, Goods b)
{
    return (a.get_price()-b.get_price());
}

int cmp_quantity (Goods a, Goods b)
{
    return (a.get_quantity()-b.get_quantity());
}

int cmp_name (Goods a, Goods b)
{
    return (a.get_name()<b.get_name()?-1:(a.get_name()>b.get_name()?1:0));
}

int cmp_date (Goods a, Goods b)
{
    return (372*(a.get_date().get_year()-1)+31*(a.get_date().get_month()-1)+a.get_date().get_day())- (372*(b.get_date().get_year()-1)+31*(b.get_date().get_month()-1)+b.get_date().get_day());
}
