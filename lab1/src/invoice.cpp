#include "invoice.h"
void Invoice::add(Product product, int quantity){
    Item item(product, quantity)
    this->products.push_back(product);
}

vector<Product> Invoice:: getProducts(){
    return this->products;
}