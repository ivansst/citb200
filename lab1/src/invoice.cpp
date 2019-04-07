#include "invoice.h"
void Invoice::add(Product product, int quantity){
    Item item(product, quantity);
    this->items.push_back(item);
}

vector <Product>Invoice::getProduct(){
    vector<Product> products;
    for(auto item : items){
        products.push_back(item.getProduct());
    }
    
    return products;
}