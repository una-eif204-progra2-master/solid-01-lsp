//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_SRP_PHYSICALPRODUCT_H
#define SOLID_01_SRP_PHYSICALPRODUCT_H


#include "Product.h"

class PhysicalProduct : public Product {
private:
    double weight;
    double applyDiscount() override;
public:
    PhysicalProduct();

    virtual ~PhysicalProduct();

    double getWeight() const;

    void setWeight(double weight);
};


#endif //SOLID_01_SRP_PHYSICALPRODUCT_H
