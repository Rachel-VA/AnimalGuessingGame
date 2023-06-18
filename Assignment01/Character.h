#pragma once
/*class Character
{
};
*/
#include "ParentClassAnimal.h"
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
//Character is a a class and it inherits from ParentClassAnnimal
class Character:public ParentClassAnimal{
public:
    //create a string property/variable

    std::string AnimalType;
    //std::string feature2;
    //std::string feature3;
    std::string feature1;
    std::string feature2;
    std::string feature3;
    Character(const std::string& feature1, const std::string& feature2, const std::string& feature3);
private: //for encapsulation data
};

#endif

