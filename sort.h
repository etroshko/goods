#ifndef SORT_H
#define SORT_H

#include "goods.h"

int partition(Goods *array, int l, int r, int (*cmp)(Goods,Goods), int order);
void sort(Goods *array, int l, int r, int (*cmp)(Goods,Goods), int order);
int cmp_price (Goods a, Goods b);
int cmp_name (Goods a, Goods b);
int cmp_quantity (Goods a, Goods b);
int cmp_date (Goods a, Goods b);

#endif // SORT_H_INCLUDED
