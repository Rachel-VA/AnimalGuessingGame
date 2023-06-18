#include "CategoryAnimal3.h"
#include<iostream>

CategoryAnimal3::CategoryAnimal3(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3)
    : ParentClassAnimal(name), character(feature1, feature2, feature3) {}

void CategoryAnimal3::Talking() const {
    std::cout << "CategoryAnimal3 is talking!" << std::endl;
}