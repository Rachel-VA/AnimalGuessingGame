#pragma once
#include "Character.h"


#ifndef CATEGORY_ANIMAL_1_H
#define CATEGORY_ANIMAL_1_H

#include "ParentClassAnimal.h"
#include "Character.h"

class CategoryAnimal1 : public ParentClassAnimal {
private:
    Character character;


public:

    CategoryAnimal1(const std::string& name);
    virtual void Talking() const;
    //void Talking() const override;


    //protptype a method in header file. But for it to work/use, must impletement it in cpp file
    //void Mammal();
    //CategoryAnimal1(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3);
    //void makeSound(std::string mySound);
    //constructor is a method without return type and must have the same name as the class
                 //pass in argu sound. notice that it's a lower case sound
    //CategoryAnimal1(std::string animaltype); //define the constructor in header file and impletement in cpp file



    CategoryAnimal1(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3);
};

#endif
