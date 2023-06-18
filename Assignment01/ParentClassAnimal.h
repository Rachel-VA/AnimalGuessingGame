#pragma once
/*
* class ParentClassAnimal
{
};
*/


#ifndef PARENT_CLASS_ANIMAL_H
#define PARENT_CLASS_ANIMAL_H

#include <string>
/*
const keyword is used when we don't allow modifying the state of the object when it's called.

*/
class ParentClassAnimal {
public:
    ParentClassAnimal();
    ParentClassAnimal(const std::string& name);

    void Talking() const;
    std::string GetName() const;
    std::string Name() const;
    int GetScore() const;
    void UpdateScore(int value);
    //void Talking() const;
    //std::string Name() const;
    //ParentClassAnimal() {} //default constructor

    //protected are accessible within the class itself and its derived classes.
protected:
    std::string name;
    int score;
/*
public:
    //constructor that takes string argument name
    ParentClassAnimal(const std::string& name);

    

    //void Talking() const;
    std::string Name() const;
    int GetScore() const; // Getter method for score
       void UpdateScore(int value);
*/

       //private are only accessible within the class itself.
//private:
   // std::string name;

};

//void UpdateScore(int value);




#endif





