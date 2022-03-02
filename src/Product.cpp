//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Product.h"

Product::Product() {}

Product::~Product() {

}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    Product::price = price;
}

double Product::convertPrice() {
    double finalPrice = price - applyDiscount();
    return finalPrice;
}

double Product::applyDiscount() {
    return getPrice();
}
