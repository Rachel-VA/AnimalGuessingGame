#pragma once
/*class CategoryAnimal2
{
};
*/

#ifndef CATEGORY_ANIMAL_2_H
#define CATEGORY_ANIMAL_2_H

#include "ParentClassAnimal.h"
#include "Character.h"

class CategoryAnimal2 : public ParentClassAnimal {
private:
    Character character;

public:
    CategoryAnimal2(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3);
    CategoryAnimal2(const std::string& name);
    //virtual void Talking() const override;
    virtual void Talking() const;
    //void Talking() const override;
}; 

#endif


