

#include "CategoryAnimal1.h"
#include<iostream>
#include "ParentClassAnimal.h"

//impletement the constructor method that define in the header file
//class name          constructor   argu for AnimalType(lowercase animaltype for argu)
/*CategoryAnimal1::CategoryAnimal1(std::string animaltype)
{
	//set AnimalType property for the class Character this constructor = the argument animaltype
	AnimalType = animaltype;
}

//implementing the medthod in this cpp file by adding in the class name after the fucn type void and the body{}
void CategoryAnimal1::makeSound(std::string mySound)
{
	std::cout << "\n"<<AnimalType <<"My Sound: " << mySound << std::endl;
}


//now impletement method that define in the header file(same name)
//notice that we use the func type + the name of the class and then the func name + the body func{}
void CategoryAnimal1::Mammal() {
	//place body for the func in here
	std::cout <<"\n\n" <<AnimalType <<"I'm belong to mamal group" << std::endl;

}
 */
CategoryAnimal1::CategoryAnimal1(const std::string& name, const std::string& feature1, const std::string& feature2, const std::string& feature3)
    :ParentClassAnimal(name), character(feature1, feature2, feature3) {}


//CategoryAnimal1::CategoryAnimal1(const std::string& name) : ParentClassAnimal(name) {}

void CategoryAnimal1::Talking() const {
	std::cout << "CategoryAnimal1 is talking!" << std::endl;
}