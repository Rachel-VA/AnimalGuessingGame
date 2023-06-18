#include "CategoryAnimal2.h"
#include<iostream>


CategoryAnimal2::CategoryAnimal2(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3)
    : ParentClassAnimal(name), character(feature1, feature2, feature3) {}

void CategoryAnimal2::Talking() const {
    std::cout << "CategoryAnimal2 is talking!" << std::endl;
}
