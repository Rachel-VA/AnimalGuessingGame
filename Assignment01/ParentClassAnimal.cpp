#include "ParentClassAnimal.h"

#include<iostream>

ParentClassAnimal::ParentClassAnimal(){}
ParentClassAnimal::ParentClassAnimal(const std::string& name) : name(name) {}
//ParentClassAnimal::ParentClassAnimal(const std::string& name)
    //: name(name), score(0) {}


void ParentClassAnimal::Talking() const {
    std::cout << "I dare you get my name correct!" << std::endl;
}
/*
void ParentClassAnimal::Talking() const {
    // Placeholder implementation for Talking method
}
*/

std::string ParentClassAnimal::Name() const {
    return name;
}

std::string ParentClassAnimal::GetName() const {
    return name;
}
int ParentClassAnimal::GetScore() const {
    return score;
}


void ParentClassAnimal::UpdateScore(int value) {
    score += value;
}
/*
std::string ParentClassAnimal::Name() const {
    return name;
}
*/
