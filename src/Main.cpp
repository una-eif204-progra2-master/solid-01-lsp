//
// Created by Maikol Guzman Alan on 3/1/22.
//
#include <iostream>
#include "PhysicalProduct.h"
#include "DigitalProduct.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    PhysicalProduct physicalProduct;
    physicalProduct.setName("Nintendo");
    physicalProduct.setPrice(500);
    physicalProduct.setWeight(1200);

    DigitalProduct digitalProduct;
    digitalProduct.setName("Game");
    digitalProduct.setPrice(120);
    digitalProduct.setFilePath("c:\\file\\game.app");

    std::cout << "[Physical Product] 30% Discount of $" << physicalProduct.getPrice() << ". Final Price: $" <<
    physicalProduct.convertPrice() << "\n" << std::endl;

    std::cout << "[Digital Product ] 12% Discount of $" << digitalProduct.getPrice() << ". Final Price: $"<<
    digitalProduct.convertPrice() << "\n" << std::endl;

    return 0;
}
