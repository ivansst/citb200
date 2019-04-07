#include "item.h"
Item::Item(Product p, int qty) : product(p){
    product = p;
    quantity = qty;
}

Product Item::getProduct(){
    return product;
}