//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "PhysicalProduct.h"

PhysicalProduct::PhysicalProduct() {}

PhysicalProduct::~PhysicalProduct() {

}

double PhysicalProduct::getWeight() const {
    return weight;
}

void PhysicalProduct::setWeight(double weight) {
    PhysicalProduct::weight = weight;
}

double PhysicalProduct::applyDiscount() {
    return getPrice() * 0.30;
}
