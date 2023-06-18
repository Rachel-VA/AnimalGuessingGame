#pragma once
/*class CategoryAnimal3
{
};
*/

#ifndef CATEGORY_ANIMAL_3_H
#define CATEGORY_ANIMAL_3_H

#include "ParentClassAnimal.h"
#include "Character.h"

class CategoryAnimal3 : public ParentClassAnimal {
private:
    Character character;

public:
    
    CategoryAnimal3(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3);
    CategoryAnimal3(const std::string& name);
    //void Talking() const override;
    virtual void Talking() const;
};

#endif

